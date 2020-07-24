#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <string.h>
#include <stdint.h>
#include <termios.h>
#include <pthread.h>
#include <iostream>
#include "r_monitor.h"

using namespace std;

R_Monitor::R_Monitor()
    : status(NORMAL)
    , adc("/dev/adc")
    , leds("/dev/leds")
    , buzzer("/dev/buzzer_ctl")
    , count(0)
{

}

float R_Monitor::calculR(int V)
{
    return (float)V / ADC_MAX * 10000;
}

int R_Monitor::calculInterval(float R)
{
    int MIN = 10;
    int MAX = 100;
    return MIN + R*(MAX-MIN)/10000;
}

void* R_Monitor::readThread(void* arg)
{
    cout << "readThread start..." << endl;
    R_Monitor &monitor = *(R_Monitor*)arg;

    int fd_adc;
    if((fd_adc = open(monitor.adc.c_str(), O_RDWR|O_NOCTTY|O_NDELAY))<0)
    {
        printf("open ADC error\n");
        return NULL;
    }
    while (true)
    {
        memset(monitor.buffer,0,sizeof(monitor.buffer));
        int len=read(fd_adc,monitor.buffer,10);
        if(len == 0)
        {
            printf("ADC read error \n");
            return NULL;
        }
        monitor.R = monitor.calculR(atoi(monitor.buffer));

        switch (monitor.status)
        {
        case NORMAL:
            if (monitor.R < 950)
            {
                monitor.status = LOW;
                monitor.count = -1;
            }
            else if (monitor.R > 9050)
            {
                monitor.status = HIGH;
                monitor.count = -1;
            }
            break;
        case LOW:
            if (monitor.R > 1050)
                monitor.status = NORMAL;
            break;
        case HIGH:
            if (monitor.R < 8950)
                monitor.status = NORMAL;
            break;
        default:
            break;
        }

        if (monitor._log)
        {
            cout << "R = " << monitor.R << ", Status = " << monitor.status << endl;
        }

        usleep(20000);
    }
}

void* R_Monitor::infoThread(void* arg)
{
    R_Monitor &monitor = *(R_Monitor*)arg;
    cout << "infoThread start..." << endl;
    int fd_led = open(monitor.leds.c_str(), O_RDWR);
    int fd_bz = open(monitor.buzzer.c_str(), O_RDWR);

    while (true)
    {
        int interval = monitor.calculInterval(monitor.R);
        //cout << monitor.status << endl;
        switch (monitor.status)
        {
        case NORMAL:
            //led
            if (monitor.count == 0)
            {
                ioctl(fd_led,1,0);
                ioctl(fd_led,0,1);
                ioctl(fd_bz,0);
            }
            else if (monitor.count == interval/2)
            {
                ioctl(fd_led,0,0);
                ioctl(fd_led,1,1);
            }
            else if (monitor.count >= interval)
            {
                monitor.count = -1;
            }
            break;
        default:

            //buzzer
            if (monitor.count == 0)
                ioctl(fd_bz,1);
            else if (monitor.count == 50)
                ioctl(fd_bz,0);
            else if (monitor.count >= 100)
                monitor.count = -1;
            break;
        }
        usleep(10000);
        monitor.count++;
        // cout << count << endl;
    }

}

int R_Monitor::start(bool log)
{
    cout << "proc start" << endl;
    _log = log;

    pthread_t tidp;

    int rc1 = pthread_create(&tidp, NULL, readThread, this);
    if(rc1!=0)
    {
        printf("readThread is not created ... \r\n");
        return -1;
    }
    int rc2 = pthread_create(&tidp, NULL, infoThread, this);
    if(rc2!=0)
    {
        printf("infoThread is not created ... \r\n");
        return -1;
    }


    return 0;
}
