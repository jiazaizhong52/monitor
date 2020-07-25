#include "frame_resistanceplot.h"
#include "ui_frame_resistanceplot.h"
#include <QPainter>
#include <cstdio>

using namespace std;

Frame_ResistancePlot::Frame_ResistancePlot(Monitor &monitor, QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_ResistancePlot),
    monitor(monitor)

{
    ui->setupUi(this);
    for (int i = 0; i < r_num; ++i)
        r_queue.enqueue(0);
}

Frame_ResistancePlot::~Frame_ResistancePlot()
{
    delete ui;
}

void Frame_ResistancePlot::drawPlot()
{
    QImage img(W, H, QImage::Format_RGB888);
    int Nx = 10, Ny = 5;
    int B = 30, Dx = (W-2*B)/Nx, Dy = (H-2*B)/Ny;
    int nt = r_num, nr = 10000;
    float ft = (float)(W-2*B)/nt, fr = (float)(H-2*B)/nr;
    QPainter painter(&img);
    QPoint o(B, H-B), px(W-B, H-B), py(B, B);
    QLine axisx(o, px), axisy(o, py);

    //frame
    painter.eraseRect(0, 0, W, H);
    painter.drawLine(axisx);
    painter.drawLine(axisy);
    painter.drawText(o+QPoint(-15, 15), "O");
    painter.drawText(px+QPoint(15, 15), "t");
    painter.drawText(py+QPoint(-15, -15), "R(k)");
    painter.setPen(QPen(Qt::DotLine));
    for (int i = 1; i <= Nx; ++i)
    {
        QPoint p1 = o+i*QPoint(Dx, 0);
        QPoint p2 = py+i*QPoint(Dx, 0);
        char ch[10];
        sprintf(ch, "%d", -nt+i*nt/Nx);
        painter.drawLine(p1, p2);
        painter.drawText(p1+QPoint(-8, 15), ch);
    }
    for (int i = 1; i <= Ny; ++i)
    {
        QPoint p1 = o-i*QPoint(0, Dy);
        QPoint p2 = px-i*QPoint(0, Dy);
        char ch[10];
        sprintf(ch, "%d", i*nr/Ny/1000);
        painter.drawLine(p1, p2);
        painter.drawText(p1+QPoint(-20, 8), ch);
    }

    //data
    painter.setPen(QPen(QColor(Qt::blue)));
    QPoint p[nt];
    int i = 0;
    //cout << r_queue.size() << endl;
    for (QQueue<int>::iterator iter = r_queue.begin(); iter != r_queue.end(); ++iter)
    {
        int R = *iter;
        p[i].setX(B + i*ft);
        p[i].setY(H-B - R*fr);
        ++i;
    }
    painter.drawPolyline(p, nt);
    painter.end();
    ui->label_photo->setPixmap(QPixmap::fromImage(img));
}

void Frame_ResistancePlot::on_resistance_addR(int R)
{
    //cout << "add R = " << R << endl;
    r_queue.dequeue();
    r_queue.enqueue(R);
    drawPlot();
}
