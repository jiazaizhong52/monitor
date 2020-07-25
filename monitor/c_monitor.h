#ifndef C_MONITOR_H
#define C_MONITOR_H
#include <string>
#include <iostream>
#include "camera.h"

using namespace std;

#define VideoPath "/dev/video0"
#define CameraType 1

class C_Monitor
{
public:
    C_Monitor();
public:
    enum Status{ ACTIVE, SLEEP, CLOSE };
    static const int H = 480;
    static const int W = 640;
    static unsigned int getSize()
    {
        return H * W * 3;
    }
private:
    Status status;
    Camera camera;
    bool _log;
    bool occupied;
    unsigned char yuyv[W*H*2];
    unsigned char rgb[W*H*3];
    unsigned char buffer[W*H*3];

    static void* catchthread(void* arg);

public:

    int open(bool log = false)
    {

        if (status == CLOSE)
        {
            _log = log;
            pthread_t ptid;
            pthread_create(&ptid, NULL, catchthread, this);
        }
        return 0;
    }

    void close()
    {
        while (occupied);
        occupied = true;

        if (status != CLOSE)
        {
            camera.CloseDevice();
            status = CLOSE;
        }
        occupied = false;
    }

    unsigned char* getPhoto() { return buffer; }

    Status getStatus() { return status; }

    static string status2str(Status status)
    {
        switch (status)
        {
        case ACTIVE:
            return "AC";
        case SLEEP:
            return "SL";
        case CLOSE:
            return "CL";
        }
    }

    bool moveDetect(unsigned char* rgb);

};

#endif // C_MONITOR_H
