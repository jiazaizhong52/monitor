#include "frame_resistance.h"
#include "ui_frame_resistance.h"
#include <cstdio>

Frame_Resistance::Frame_Resistance(Monitor &monitor, QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_Resistance),
    monitor(monitor)
{
    ui->setupUi(this);
    ui->textBrowser->document()->setMaximumBlockCount(100);
}

Frame_Resistance::~Frame_Resistance()
{
    delete ui;
}

void Frame_Resistance::updataData()
{
    int R = (int)monitor.getR();
    char str[10];
    sprintf(str, "%d", R);
    string status = R_Monitor::status2str(monitor.getR_Status());
    ui->label_resistance->setText(QString(str));
    ui->label_status->setText(QString(status.c_str()));
    ui->textBrowser->append("R = " + QString(str) + ", Status = " + status.c_str());
    emit addR(R);
}

void Frame_Resistance::on_buttom_viewPlot_clicked()
{
    emit resistancePlot();
}
