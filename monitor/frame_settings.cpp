#include "frame_settings.h"
#include "ui_frame_settings.h"

Frame_Settings::Frame_Settings(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_Settings)
{
    ui->setupUi(this);
}

Frame_Settings::~Frame_Settings()
{
    delete ui;
}
