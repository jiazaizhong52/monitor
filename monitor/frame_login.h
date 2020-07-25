#ifndef FRAME_LOGIN_H
#define FRAME_LOGIN_H

#include <QFrame>

namespace Ui {
class Frame_Login;
}

class Frame_Login : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_Login(QWidget *parent = nullptr);
    ~Frame_Login();

private:
    Ui::Frame_Login *ui;
};

#endif // FRAME_LOGIN_H
