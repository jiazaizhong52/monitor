#include "frame_resistanceplot.h"
#include "ui_frame_resistanceplot.h"

Frame_ResistancePlot::Frame_ResistancePlot(Monitor &monitor, QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_ResistancePlot),
    monitor(monitor)

{
    ui->setupUi(this);
}

Frame_ResistancePlot::~Frame_ResistancePlot()
{
    delete ui;
}
