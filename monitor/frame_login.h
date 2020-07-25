#ifndef FRAME_LOGIN_H
#define FRAME_LOGIN_H

#include <QFrame>
#include "monitor.h"

namespace Ui {
class Frame_Login;
}

class Frame_Login : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_Login(Monitor &monitor, QWidget *parent = NULL);
    ~Frame_Login();

private slots:
    void on_buttom_connect_clicked();


    void on_buttom1_clicked();

    void on_buttom2_clicked();

    void on_buttom3_clicked();

    void on_buttom4_clicked();

    void on_buttom5_clicked();

    void on_buttom6_clicked();

    void on_buttom7_clicked();

    void on_buttom8_clicked();

    void on_buttom9_clicked();

    void on_buttom0_clicked();

    void on_buttom_back_clicked();

private:
    Ui::Frame_Login *ui;
    Monitor &monitor;
    bool connectionOn;
    void input(char num);
    void backspace();

public:
    void updateData();
    void setConnectionStatus(bool on) { connectionOn = on; }
signals:
    void login(string userName, string key);
    void logout();
};

#endif // FRAME_LOGIN_H
