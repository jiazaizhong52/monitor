#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "monitor.h"
#include "client_mqtt.h"
#include "frame_resistance.h"
#include "frame_camera.h"
#include "frame_photolist.h"
#include "frame_resistanceplot.h"
#include "frame_settings.h"
#include "frame_login.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = NULL);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Frame_Resistance f_resistance;
    Frame_Camera f_camera;
    Frame_PhotoList f_photoList;
    Frame_ResistancePlot f_resistancePlot;
    Frame_Settings f_settings;
    Frame_Login f_login;

//usr
private:
    QTimer m_timer;


    void updateData();

public:
    Monitor monitor;
    Client_MQTT client;


private slots:
    void on_actionview_resistance_triggered();
    void on_timer_timeOut();
    void on_actionview_camera_triggered();
    void on_actionview_photoList_triggered();
    void on_actionview_resistancePlot_triggered();
    void on_actionexit_triggered();
    void on_actionsettings_triggered();
    void on_actionlogin_triggered();
    void on_login_login(string userName, string key);
    void on_login_logout();
};
#endif // MAINWINDOW_H
