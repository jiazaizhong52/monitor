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
    string address;
    string clientID;
    string userName;
    bool connectionOn;

public:
    void updateData();
    void setConnectionInfo(string address, string clientID, string userName)
    {
        this->address = address;
        this->clientID = clientID;
        this->userName = userName;
    }
    void setConnectionStatus(bool on) { connectionOn = on; }
};

#endif // FRAME_SETTINGS_H
