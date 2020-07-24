#include "frame_camera.h"
#include "ui_frame_camera.h"

Frame_Camera::Frame_Camera(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_Camera)
{
    ui->setupUi(this);
}

Frame_Camera::~Frame_Camera()
{
    delete ui;
}
