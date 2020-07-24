#ifndef C_MONITOR_H
#define C_MONITOR_H
#include <string>
#include <iostream>
#include "camera.h"

using namespace std;

#define VideoPath "/dev/video0"
#define CameraType 0

class C_Monitor
{
public:
    C_Monitor();
public:
    enum Status{ ACTIVE, SLEEP, CLOSE };
    static const int H = 640;
    static const int W = 480;
    static unsigned int getSize()
    {
        return H * W * 3;
    }
private:
    Status status;
    Camera camera;
    bool _log;
    bool occupied;
    unsigned char yuyv[W*H*4];
    unsigned char rgb[W*H*3];
    unsigned char buffer[W*H*3];

    static void* catchthread(void* arg);

public:

    int start(bool log = false);

    int open()
    {
        while (occupied);
        occupied = true;

        if (status == CLOSE)
        {
            if (!camera.OpenDevice())
            {
                cout << "open camera error!" << endl;
                camera.CloseDevice();
                status = CLOSE;
            }
            else
                status = ACTIVE;
        }
        occupied = false;
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



};

#endif // C_MONITOR_H
