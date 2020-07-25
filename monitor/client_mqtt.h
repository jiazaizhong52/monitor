#ifndef CLIENT_MQTT_H
#define CLIENT_MQTT_H
#include "monitor.h"
#include "network_mqtt.h"
#define ADDRESS "121.237.246.136:12183"
//#define ADDRESS "cyfio2.tpddns.cn:12183"
#define CLIENTID    "ExampleClientSub"

class Client_MQTT
{
public:
    Client_MQTT(Monitor &monitor);
    typedef NetWork_MQTT::CLIENT_STATES Status;

private:
    Monitor &monitor;
    NetWork_MQTT net;
    int R;
    unsigned char* photo;
    int Interval;


public:
    bool connect(const string &user_name, const string &password);
    void sendR();
    void sendPhoto();
    void sendInterval();
    static void recvInterval(void * arg, const string &topic, MQTTAsync_message *msg);
    Status getStatus() { return net.getStatus(); }
};

#endif // CLIENT_MQTT_H
