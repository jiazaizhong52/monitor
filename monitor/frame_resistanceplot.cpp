#include "frame_resistanceplot.h"
#include "ui_frame_resistanceplot.h"

Frame_ResistancePlot::Frame_ResistancePlot(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_ResistancePlot)
{
    ui->setupUi(this);
}

Frame_ResistancePlot::~Frame_ResistancePlot()
{
    delete ui;
}
