#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , f_resistance(monitor, this)
    , f_camera(monitor, this)
    , f_photoList(monitor, this)
    , interval(100)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->stackedWidget->addWidget(&f_resistance);
    ui->stackedWidget->addWidget(&f_camera);
    ui->stackedWidget->addWidget(&f_photoList);
    monitor.start();

    m_timer.start(interval);


    connect(&m_timer, SIGNAL(timeout()), this, SLOT(on_timer_timeOut()));
    connect(&f_camera, SIGNAL(addPhoto(QString)), &f_photoList, SLOT(on_camera_addPhoto(QString)));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateData()
{
    f_resistance.updataData();
    f_camera.updataData();
}

void MainWindow::on_actionview_resistance_triggered()
{
    ui->stackedWidget->setCurrentWidget(&f_resistance);
}

void MainWindow::on_timer_timeOut()
{
    updateData();
}

void MainWindow::on_actionview_camera_triggered()
{
    ui->stackedWidget->setCurrentWidget(&f_camera);
}

void MainWindow::on_actionview_photoList_triggered()
{
    ui->stackedWidget->setCurrentWidget(&f_photoList);
}
