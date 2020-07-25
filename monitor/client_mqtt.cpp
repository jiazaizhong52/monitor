#include "client_mqtt.h"

Client_MQTT::Client_MQTT(Monitor &monitor)
    : monitor(monitor)
{

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
    net.publish("resistance/down", &Interval, sizeof(Interval));
    net.publish("camera/down", &Interval, sizeof(Interval));
}
