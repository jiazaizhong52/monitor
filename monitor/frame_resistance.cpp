#include "frame_resistance.h"
#include "ui_frame_resistance.h"

Frame_Resistance::Frame_Resistance(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_Resistance)
{
    ui->setupUi(this);
}

Frame_Resistance::~Frame_Resistance()
{
    delete ui;
}
