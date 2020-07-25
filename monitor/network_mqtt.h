#ifndef NETWORK_MQTT_H
#define NETWORK_MQTT_H
#include "MQTTAsync.h"

#include <string>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class NetWork_MQTT
{
public:
    NetWork_MQTT();
    typedef enum{
        CLIENT_UNINITIALIZED = 0,
        CLIENT_INIITIALIZED,
        CLIENT_STARTING,
        CLIENT_STARTED,
        CLIENT_FINISHED,
        CLIENT_DESTROYED
    }CLIENT_STATES;

    typedef void Receive_Callback_t(void* arg, const string& topic, MQTTAsync_message* message);
    struct receive_register_t{
      void* arg;
      Receive_Callback_t* callback;
      bool operator==(const receive_register_t& other)const
      {
          return arg == other.arg && callback == other.callback;
      }
    };

    bool setup(const string& addr, const string& client_id);
    bool connect(const string &user_name, const string &password);
    bool subscribe(const string& topic, int QOS = 1);
    bool unSubscribe(const string &topic);
    bool disconnect(MQTTAsync_onSuccess* onDisconnect = NULL, MQTTAsync_onFailure* onDisconnectFailure = NULL);
    bool register_Receive(const string &topic, void *arg, NetWork_MQTT::Receive_Callback_t callback);
    bool resign_Receive(const string& topic, void* arg);
    bool publish(const string& topic, void* payload, int payloadlen, void* context = NULL
            , MQTTAsync_onSuccess* onSuccess = NULL, MQTTAsync_onFailure* onFailure = NULL
            ,int QOS = 1);
    CLIENT_STATES getStatus() { return state; }

private:
    CLIENT_STATES state;
    MQTTAsync client;
    int ret_code;
    map<string, vector<receive_register_t>> receive_callbacks;


    static void on_connect_fail(void* arg, MQTTAsync_failureData* response);
    static void on_connect_success(void* arg, MQTTAsync_successData* response);
    static void on_connection_lost(void* ptr_this, char* cause);

    static int on_message_arrived(void* arg, char* topicName, int topicLen, MQTTAsync_message* message);
    //static int on_print(void* arg, )


};

#endif // NETWORK_MQTT_H
