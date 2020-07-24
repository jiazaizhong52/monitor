#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "monitor.h"
#include "frame_resistance.h"
#include "frame_camera.h"
#include "frame_photolist.h"

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

//usr
private:
    QTimer m_timer;

    void updateData();

public:
    Monitor monitor;
    int interval;


private slots:
    void on_actionview_resistance_triggered();
    void on_timer_timeOut();
    void on_actionview_camera_triggered();
    void on_actionview_photoList_triggered();
};
#endif // MAINWINDOW_H
