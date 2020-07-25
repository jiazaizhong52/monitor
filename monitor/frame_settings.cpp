#include "frame_settings.h"
#include "ui_frame_settings.h"
#include <cmath>

Frame_Settings::Frame_Settings(Monitor &monitor, QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_Settings),
    monitor(monitor)
{
    ui->setupUi(this);
//    ui->horizontalSlider->setValue(5);
//    on_horizontalSlider_valueChanged(5);
    monitor.setFPS(5);
    m = log(1+FPS_MAX-FPS_MIN);
}

Frame_Settings::~Frame_Settings()
{
    delete ui;
}

void Frame_Settings::on_horizontalSlider_valueChanged(int value)
{
    float fps = exp(value*m/10) - 1 + FPS_MIN;
    monitor.setFPS(fps);
    cout << "set fps = " << fps << endl;
}

void Frame_Settings::updataData()
{
    float fps = 1000/(float)monitor.getInterval();
    int value = log(fps-FPS_MIN+1) * 10 / m;
    ui->horizontalSlider->setValue(value);
}
