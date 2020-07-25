#include "c_monitor.h"
#include <iostream>
#include <cstring>
#include <pthread.h>

using namespace std;


C_Monitor::C_Monitor()
    : camera(VideoPath, W, H, CameraType)
    , status(CLOSE)
    , occupied(false)
{

}

//void* C_Monitor::catchthread2(void* arg)
//{
//    C_Monitor &monitor = *(C_Monitor*)arg;
//    while (monitor.occupied);
//    monitor.occupied = true;
//    if (!monitor.camera.OpenDevice())
//    {
//        cout << "open camera error!" << endl;
//        monitor.camera.CloseDevice();
//        monitor.status = CLOSE;
//    }
//    else
//    {
//        monitor.status = ACTIVE;
//    }
//    monitor.occupied = false;

//    while (true)
//    {
//        if (monitor.status == CLOSE)
//            continue;
//        if (monitor._log) cout << "image update" << endl;

//        while (monitor.occupied);
//        monitor.occupied = true;
//        if (!monitor.camera.GetBuffer(monitor.yuyv))
//            cout << "get buffer error" << endl;
//        monitor.occupied = false;

//        monitor.camera.process_image2(monitor.yuyv, monitor.rgb);
//        memcpy(monitor.buffer, monitor.rgb, monitor.getSize());
//        if (monitor._log) cout << "image processed successfully" << endl;
//    }
//}

void* C_Monitor::catchthread(void* arg)
{
    C_Monitor &monitor = *(C_Monitor*)arg;
    if (monitor.status == CLOSE)
    {
        while (monitor.occupied);
        monitor.occupied = true;
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
        monitor.occupied = false;
    }

    while (monitor.status != CLOSE)
    {
        if (monitor._log) cout << "image update" << endl;

        while (monitor.occupied);
        monitor.occupied = true;
        if (monitor.status == CLOSE)
            break;
        if (!monitor.camera.GetBuffer(monitor.yuyv))
            cout << "get buffer error" << endl;
        monitor.occupied = false;

        monitor.camera.process_image2(monitor.yuyv, monitor.rgb);
        memcpy(monitor.buffer, monitor.rgb, monitor.getSize());
        if (monitor._log) cout << "image processed successfully" << endl;
    }
    monitor.occupied = false;
}

bool C_Monitor::moveDetect(unsigned char* rgb)
{

}
