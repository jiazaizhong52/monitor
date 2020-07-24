#ifndef FRAME_RESISTANCEPLOT_H
#define FRAME_RESISTANCEPLOT_H

#include <QFrame>
#include "monitor.h"

namespace Ui {
class Frame_ResistancePlot;
}

class Frame_ResistancePlot : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_ResistancePlot(Monitor &monitor, QWidget *parent = nullptr);
    ~Frame_ResistancePlot();

private:
    Ui::Frame_ResistancePlot *ui;
    Monitor &monitor;

};

#endif // FRAME_RESISTANCEPLOT_H
