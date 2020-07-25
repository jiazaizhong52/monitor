#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , f_resistance(monitor, this)
    , f_camera(monitor, this)
    , f_photoList(monitor, this)
    , f_resistancePlot(monitor, this)
    , f_settings(monitor, this)
    , f_login(monitor, this)
    , client(monitor)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->stackedWidget->addWidget(&f_resistance);
    ui->stackedWidget->addWidget(&f_camera);
    ui->stackedWidget->addWidget(&f_photoList);
    ui->stackedWidget->addWidget(&f_resistancePlot);
    ui->stackedWidget->addWidget(&f_settings);
    ui->stackedWidget->addWidget(&f_login);
    monitor.start();

    //timer
    m_timer.start(monitor.getInterval());


    connect(&m_timer, SIGNAL(timeout()), this, SLOT(on_timer_timeOut()));
    connect(&f_camera, SIGNAL(addPhoto(QString)), &f_photoList, SLOT(on_camera_addPhoto(QString)));
    connect(&f_resistance, SIGNAL(addR(int)), &f_resistancePlot, SLOT(on_resistance_addR(int)));
    connect(&f_login, SIGNAL(login(string, string)), this, SLOT(on_login_login(string, string)));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateData()
{
    f_resistance.updataData();
    f_camera.updataData();
    f_settings.updataData();
    if (client.getStatus() == Client_MQTT::Status::CLIENT_STARTED)
    {
        client.sendR();
        client.sendPhoto();
    }
}

void MainWindow::on_actionview_resistance_triggered()
{
    ui->stackedWidget->setCurrentWidget(&f_resistance);
}

void MainWindow::on_timer_timeOut()
{
    updateData();
    m_timer.setInterval(monitor.getInterval());
}

void MainWindow::on_actionview_camera_triggered()
{
    ui->stackedWidget->setCurrentWidget(&f_camera);
}

void MainWindow::on_actionview_photoList_triggered()
{
    ui->stackedWidget->setCurrentWidget(&f_photoList);
}

void MainWindow::on_actionview_resistancePlot_triggered()
{
    ui->stackedWidget->setCurrentWidget(&f_resistancePlot);
}

void MainWindow::on_actionexit_triggered()
{
    exit(0);
}

void MainWindow::on_actionsettings_triggered()
{
    ui->stackedWidget->setCurrentWidget(&f_settings);
}

void MainWindow::on_actionlogin_triggered()
{
    ui->stackedWidget->setCurrentWidget(&f_login);
}

void MainWindow::on_login_login(string userName, string key)
{
    cout << "login... name = " << userName << ", key = " << key << endl;
    client.connect(userName, key);
}
