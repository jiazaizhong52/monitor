#include "frame_login.h"
#include "ui_frame_login.h"

Frame_Login::Frame_Login(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_Login)
{
    ui->setupUi(this);
}

Frame_Login::~Frame_Login()
{
    delete ui;
}
