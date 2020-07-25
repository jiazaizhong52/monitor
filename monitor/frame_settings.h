#ifndef FRAME_SETTINGS_H
#define FRAME_SETTINGS_H

#include <QFrame>
#include <monitor.h>
const float FPS_MIN = 0.2;
const float FPS_MAX = 10;

namespace Ui {
class Frame_Settings;
}

class Frame_Settings : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_Settings(Monitor &monitor, QWidget *parent = NULL);
    ~Frame_Settings();

private slots:
    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Frame_Settings *ui;
    Monitor &monitor;
    float m;

public:
    void updataData();
};

#endif // FRAME_SETTINGS_H
