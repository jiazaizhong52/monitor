#include "frame_photolist.h"
#include "ui_frame_photolist.h"

Frame_PhotoList::Frame_PhotoList(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_PhotoList)
{
    ui->setupUi(this);
}

Frame_PhotoList::~Frame_PhotoList()
{
    delete ui;
}
