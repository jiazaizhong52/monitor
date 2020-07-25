#ifndef FRAME_RESISTANCE_H
#define FRAME_RESISTANCE_H

#include <QFrame>
#include "monitor.h"

namespace Ui {
class Frame_Resistance;
}

class Frame_Resistance : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_Resistance(Monitor &monitor, QWidget *parent = NULL);
    ~Frame_Resistance();

private:
    Ui::Frame_Resistance *ui;
    Monitor &monitor;

public:

    void updataData();

signals:
    void addR(int R);
    void resistancePlot();
private slots:
    void on_buttom_viewPlot_clicked();
};

#endif // FRAME_RESISTANCE_H
