#include "frame_login.h"
#include "ui_frame_login.h"

Frame_Login::Frame_Login(Monitor &monitor, QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_Login),
    monitor(monitor)
{
    ui->setupUi(this);
    ui->edit_key->setEchoMode(QLineEdit::Password);
}

Frame_Login::~Frame_Login()
{
    delete ui;
}

void Frame_Login::input(char c)
{
    if (ui->edit_userName->hasFocus())
    {
        ui->edit_userName->setText(ui->edit_userName->text() + c);
    }
    if (ui->edit_key->hasFocus())
    {
        ui->edit_key->setText(ui->edit_key->text() + c);
    }
}

void Frame_Login::on_buttom_connect_clicked()
{
    QString userName = ui->edit_userName->text();
    QString key = ui->edit_key->text();
    //TODO:
    emit login(userName.toStdString(), key.toStdString());
}

void Frame_Login::on_buttom1_clicked()
{
    input('1');
}

void Frame_Login::on_buttom2_clicked()
{
    input('2');
}

void Frame_Login::on_buttom3_clicked()
{
    input('3');
}

void Frame_Login::on_buttom4_clicked()
{
    input('4');
}

void Frame_Login::on_buttom5_clicked()
{
    input('5');
}

void Frame_Login::on_buttom6_clicked()
{
    input('6');
}

void Frame_Login::on_buttom7_clicked()
{
    input('7');
}

void Frame_Login::on_buttom8_clicked()
{
    input('8');
}

void Frame_Login::on_buttom9_clicked()
{
    input('9');
}

void Frame_Login::on_buttom0_clicked()
{
    input('0');
}
