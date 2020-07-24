#ifndef FRAME_RESISTANCEPLOT_H
#define FRAME_RESISTANCEPLOT_H

#include <QFrame>

namespace Ui {
class Frame_ResistancePlot;
}

class Frame_ResistancePlot : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_ResistancePlot(QWidget *parent = nullptr);
    ~Frame_ResistancePlot();

private:
    Ui::Frame_ResistancePlot *ui;
};

#endif // FRAME_RESISTANCEPLOT_H
