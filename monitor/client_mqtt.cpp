#include "client_mqtt.h"

Client_MQTT::Client_MQTT(Monitor &monitor)
    : monitor(monitor)
{

}

bool Client_MQTT::connect(const string &user_name, const string &password)
{
    if (net.getStatus() == NetWork_MQTT::CLIENT_UNINITIALIZED)
    {
        if (!net.setup(ADDRESS, CLIENTID))
        {
            cout << "set up failed" << endl;
            return false;
        }
    }
    if (!net.connect(user_name, password))
    {
        cout << "connect failed" << endl;
        return false;
    }

    net.register_Receive("resistance/feedback", this, recvFeedbackR);
    net.subscribe("resistance/feedback");
    net.register_Receive("camera/feedback", this, recvFeedbackPhoto);
    net.subscribe("camera/feedback");
    net.register_Receive("interval/up", this, recvInterval);
    net.subscribe("interval/up");
    return true;
}

bool Client_MQTT::disConnect()
{
    return net.disconnect();
}

void Client_MQTT::sendR()
{
    monitor.feedbackR = flag_feedbackR;

    R = monitor.getR();
    cout << "send R ..." << endl;
    net.publish("resistance/data", &R, sizeof (R));
    flag_feedbackR = false;
}
void Client_MQTT::sendPhoto()
{
    monitor.feedbackPhoto = flag_feedbackPhoto;

    photo = monitor.getPhoto();
    cout << "send photo ..." << endl;
    net.publish("camera/data", photo, monitor.cm.getSize());
    flag_feedbackPhoto = false;
}
void Client_MQTT::sendInterval()
{
    Interval = monitor.getInterval();
    cout << "send internal ..." << endl;
    net.publish("interval/down", &Interval, sizeof(Interval));
}

void Client_MQTT::recvInterval(void * arg, const string &topic, MQTTAsync_message *msg)
{
    Client_MQTT &client = *(Client_MQTT*)arg;
    client.Interval = *(int*)msg->payload;
    client.monitor.setFPS(1000/(float)client.Interval);
    cout << "received interval = " << client.Interval << endl;
}
