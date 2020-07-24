#ifndef R_MONITOR_H
#define R_MONITOR_H
#include <string>

using namespace std;

class R_Monitor
{
public:
    R_Monitor();
public:
    enum Status{ NORMAL, LOW, HIGH };
private:
    const static int ADC_MAX = 0xFFF;
    float R;
    Status status;
    char buffer[512];
    string adc;
    string leds;
    string buzzer;
    int count;
    bool _log;

    float calculR(int V);
    int calculInterval(float R);
    static void* readThread(void* arg);
    static void* infoThread(void* arg);

public:

    int start(bool log = false);

    float getR() { return R; }

    Status getStatus() { return status; }

    static string status2str(Status status)
    {
        switch (status)
        {
        case NORMAL:
            return "OK";
        case HIGH:
            return "HI";
        case LOW:
            return "LO";
        }
    }

};

#endif // R_MONITOR_H
