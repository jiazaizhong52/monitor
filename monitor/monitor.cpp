#include "monitor.h"
#include <iostream>

using namespace std;

Monitor::Monitor()
{

}


int Monitor::start()
{
    if (rm.start(false) == -1)
    {
        cout << "R_Monitor start failed!" << endl;
        return -1;
    }

//    if (cm.start(true) == -1)
//    {
//        cout << "C_Monitor start failed!" << endl;
//        return -1;
//    }

}
