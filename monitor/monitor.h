#ifndef MONITER_H
#define MONITER_H
#include "r_monitor.h"
#include "c_monitor.h"

class Monitor
{
public:
    Monitor();

public:
    R_Monitor rm;
    C_Monitor cm;

private:
    int interval;

public:

    bool feedbackR;
    bool feedbackPhoto;


    int start();

    //camera
    void openCamera() { cm.open(); }

    void closeCamera() { cm.close(); }

    unsigned char* getPhoto() { return cm.getPhoto(); }

    C_Monitor::Status getC_Status() { return cm.getStatus(); }

    //resistance
    float getR() { return rm.getR(); }

    R_Monitor::Status getR_Status() { return rm.getStatus(); }

    void setFPS(float fps) { interval = 1000/fps; }

    int getInterval() { return interval; }



};

#endif // MONITER_H
