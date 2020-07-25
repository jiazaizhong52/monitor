#include "client_mqtt.h"

Client_MQTT::Client_MQTT(Monitor &monitor)
    : monitor(monitor)
{

}

bool Client_MQTT::connect(const string &user_name, const string &password)
{
    if (!net.setup(ADDRESS, CLIENTID))
    {
        return false;
    }
    if (!net.connect(user_name, password))
    {
        return false;
    }


    return true;
}

void Client_MQTT::sendR()
{
    R = monitor.getR();
    cout << "send R ..." << endl;
    net.publish("resistance/data", &R, sizeof (R));
}
void Client_MQTT::sendPhoto()
{
    photo = monitor.getPhoto();
    cout << "send photo ..." << endl;
    net.publish("camera/data", photo, monitor.cm.getSize());
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
}
