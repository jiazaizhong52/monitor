#include "network_mqtt.h"

NetWork_MQTT::NetWork_MQTT()
    :state(CLIENT_UNINITIALIZED)
{

}

bool NetWork_MQTT::setup(const string &addr, const string &client_id)
{
    if(this->state != CLIENT_UNINITIALIZED)
    {
        return false;
    }
//    if ((ret_code = MQTTAsync_create(&client, qPrintable(addr), qPrintable(client_id), MQTTCLIENT_PERSISTENCE_NONE, NULL)) != MQTTASYNC_SUCCESS)
    if ((ret_code = MQTTAsync_create(&client, addr.c_str(), client_id.c_str(), MQTTCLIENT_PERSISTENCE_NONE, NULL)) != MQTTASYNC_SUCCESS)
    {
        cout << "fail to create client" << endl;
        return false;
    }
    if ((ret_code = MQTTAsync_setCallbacks(client, (void*)this, on_connection_lost, on_message_arrived, NULL)) != MQTTASYNC_SUCCESS)
    {
        cout << "client fail to set callbacks" << endl;
        MQTTAsync_destroy(&client);
        return false;
    }
    this->state = CLIENT_INIITIALIZED;
    cout << "client setup successfully" << endl;
    return true;
}


bool NetWork_MQTT::connect(const string &user_name, const string &password)
{

    if(this->state != CLIENT_INIITIALIZED)
        return false;
    MQTTAsync_connectOptions conn_opts = MQTTAsync_connectOptions_initializer;
//    conn_opts.username = qPrintable(user_name);
//    conn_opts.password = qPrintable(password);
    conn_opts.username = "lyh";
    conn_opts.password = "08117114";
    conn_opts.keepAliveInterval = 20;
    conn_opts.cleansession = 1;
    conn_opts.onSuccess = on_connect_success;
    conn_opts.onFailure = on_connect_fail;
    conn_opts.context = (void*)this;
    if ((ret_code = MQTTAsync_connect(client, &conn_opts)) != MQTTASYNC_SUCCESS)
    {
        cout << "client fail to start connection" << endl;
        return false;
    }
    this->state = CLIENT_STARTING;
    cout << "client connection starting..." << endl;
    return true;

}

bool NetWork_MQTT::disconnect(MQTTAsync_onSuccess *onDisconnect, MQTTAsync_onFailure *onDisconnectFailure)
{
    MQTTAsync_disconnectOptions disc_opts = MQTTAsync_disconnectOptions_initializer;
    disc_opts.onSuccess = onDisconnect;
    disc_opts.onFailure = onDisconnectFailure;
    if ((ret_code = MQTTAsync_disconnect(client, &disc_opts)) != MQTTASYNC_SUCCESS)
    {
        return false;
    }
    this->state = CLIENT_FINISHED;
    return true;
}

bool NetWork_MQTT::register_Receive(const string &topic, void *arg, NetWork_MQTT::Receive_Callback_t callback)
{
    receive_register_t receive_record;
    receive_record.arg = arg;
    receive_record.callback = callback;

    for (vector<receive_register_t>::iterator iter = receive_callbacks[topic].begin()
         ; iter != receive_callbacks[topic].end(); ++iter)
    {
        if ((*iter) == receive_record)
            return false;
    }
    receive_callbacks[topic].push_back(receive_record);
    return true;
}

bool NetWork_MQTT::resign_Receive(const string &topic, void *arg)
{
    vector<receive_register_t> cb_vect = receive_callbacks[topic];
    for(vector<receive_register_t>::iterator i = cb_vect.begin(); i < cb_vect.end();)
    {
        if(i->arg == arg)
            i = cb_vect.erase(i);
        else
            ++i;
    }
    return true;
}



bool NetWork_MQTT::subscribe(const string& topic, int QOS)
{
    MQTTAsync_responseOptions opts = MQTTAsync_responseOptions_initializer;
    if ((ret_code = MQTTAsync_subscribe(client, topic.c_str(), QOS, &opts)) != MQTTASYNC_SUCCESS)
    {
        cout << "client " << topic << " subsrciption failed" << endl;
        return false;
    }
    return true;
}

bool NetWork_MQTT::unSubscribe(const string &topic)
{
    MQTTAsync_responseOptions opts = MQTTAsync_responseOptions_initializer;
    if ((ret_code = MQTTAsync_unsubscribe(client, topic.c_str(), &opts)) != MQTTASYNC_SUCCESS)
    {
        return false;
    }
    return true;
}

bool NetWork_MQTT::publish(const string& topic, void* payload, int payloadlen, void* context, MQTTAsync_onSuccess* onSuccess, MQTTAsync_onFailure* onFailure,int QOS)
{
    MQTTAsync_responseOptions opts = MQTTAsync_responseOptions_initializer;
    MQTTAsync_message pubmsg = MQTTAsync_message_initializer;
    opts.onSuccess = onSuccess;
    opts.onFailure = onFailure;
    opts.context = context;
    pubmsg.payload = payload;
    pubmsg.payloadlen = payloadlen;
    pubmsg.qos = QOS;
    pubmsg.retained = 0;
    if ((ret_code = MQTTAsync_sendMessage(client, topic.c_str(), &pubmsg, &opts)) != MQTTASYNC_SUCCESS)
    {
        return false;
    }
    return true;
}





//private:
void NetWork_MQTT::on_connect_fail(void *arg, MQTTAsync_failureData *response)
{
    NetWork_MQTT &client = *(NetWork_MQTT*)arg;
    client.state = CLIENT_INIITIALIZED;
    cout << "client fail to connect" << endl;
}

void NetWork_MQTT::on_connect_success(void *arg, MQTTAsync_successData *response)
{
    NetWork_MQTT &client = *(NetWork_MQTT*)arg;
    client.state = CLIENT_STARTED;
    cout << "client connect successfully" << endl;
}

int NetWork_MQTT::on_message_arrived(void *ptr_this, char *topicName, int topicLen, MQTTAsync_message *message)
{
    NetWork_MQTT &client = *(NetWork_MQTT*)ptr_this;
    string topic = topicName;
    vector<receive_register_t> cb_vect = client.receive_callbacks[topic];
    for(vector<receive_register_t>::iterator i = cb_vect.begin(); i != cb_vect.end(); ++i)
    {
        i->callback(i->arg,topic,message);
    }
    MQTTAsync_freeMessage(&message);
    MQTTAsync_free(topicName);
    return 1;
}

void NetWork_MQTT::on_connection_lost(void *arg, char *cause)
{
    NetWork_MQTT &client = *(NetWork_MQTT*)arg;

    client.state = CLIENT_STARTING;
    if ((client.ret_code = MQTTAsync_reconnect(client.client)) != MQTTASYNC_SUCCESS)
    {
        client.state = CLIENT_INIITIALIZED;
    }
}
