#ifndef FRAME_RESISTANCE_H
#define FRAME_RESISTANCE_H

#include <QFrame>

namespace Ui {
class Frame_Resistance;
}

class Frame_Resistance : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_Resistance(QWidget *parent = nullptr);
    ~Frame_Resistance();

private:
    Ui::Frame_Resistance *ui;
};

#endif // FRAME_RESISTANCE_H
