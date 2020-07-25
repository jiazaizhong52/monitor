#ifndef FRAME_RESISTANCEPLOT_H
#define FRAME_RESISTANCEPLOT_H

#include <QFrame>
#include <QQueue>
#include "monitor.h"

namespace Ui {
class Frame_ResistancePlot;
}

class Frame_ResistancePlot : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_ResistancePlot(Monitor &monitor, QWidget *parent = NULL);
    ~Frame_ResistancePlot();

private:
    Ui::Frame_ResistancePlot *ui;
    Monitor &monitor;
    static const int W = 380;
    static const int H = 180;
    static const int r_num = 50;
    QQueue<int> r_queue;
    QImage img;
    void drawPlot();

private slots:
    void on_resistance_addR(int R);

};

#endif // FRAME_RESISTANCEPLOT_H
