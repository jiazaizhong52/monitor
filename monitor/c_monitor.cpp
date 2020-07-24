#include "c_monitor.h"
#include <iostream>
#include <cstring>
#include <pthread.h>

using namespace std;


C_Monitor::C_Monitor()
    : camera(VideoPath, W, H, CameraType)
    , status(CLOSE)
{

}

void* C_Monitor::catchthread(void* arg)
{
    C_Monitor &monitor = *(C_Monitor*)arg;
    if (!monitor.camera.OpenDevice())
    {
        cout << "open camera error!" << endl;
        monitor.camera.CloseDevice();
        monitor.status = CLOSE;
    }
    else
    {
        monitor.status = ACTIVE;
    }

    while (true)
    {
        if (monitor.status == CLOSE)
            continue;
        if (monitor._log) cout << "image update" << endl;

        while (monitor.occupied);
        monitor.occupied = true;
        if (!monitor.camera.GetBuffer(monitor.yuyv))
            cout << "get buffer error" << endl;
        monitor.occupied = false;

        monitor.camera.process_image(monitor.yuyv, monitor.rgb);
        memcpy(monitor.buffer, monitor.rgb, monitor.getSize());
        if (monitor._log) cout << "image processed successfully" << endl;
    }
}

int C_Monitor::start(bool log)
{
    _log = log;
    pthread_t ptid;
    pthread_create(&ptid, NULL, catchthread, this);
}

