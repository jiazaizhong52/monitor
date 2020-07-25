#include "frame_camera.h"
#include "ui_frame_camera.h"
#include <QTime>

Frame_Camera::Frame_Camera(Monitor &monitor, QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_Camera),
    monitor(monitor),
    m_CameraIsOpened(true)
{
    ui->setupUi(this);
    ui->buttom_camera->setText("Close Camera");
    ui->buttom_photo->setEnabled(true);
}

Frame_Camera::~Frame_Camera()
{
    delete ui;
}

void Frame_Camera::updataData()
{
    if (!m_CameraIsOpened || monitor.getC_Status() == C_Monitor::CLOSE)
        return;
    m_img = QImage(monitor.getPhoto(), monitor.cm.W, monitor.cm.H, QImage::Format_RGB888);
    ui->label_photo->setPixmap(QPixmap::fromImage(m_img));
    cout << "update photo, status = " << monitor.cm.status2str(monitor.getC_Status()) << endl;
}

void Frame_Camera::on_buttom_camera_clicked()
{
    if (m_CameraIsOpened)
    {
        // close camera
        // ...
        monitor.closeCamera();

        cout << "close camera" << endl;
        ui->label_photo->setText("Click \'Open Camera\' to view photo.");
        ui->buttom_camera->setText("Open Camera");
        ui->buttom_photo->setEnabled(false);

        m_CameraIsOpened = false;

    }
    else
    {
        // open camera
        // ...
        monitor.openCamera();

        cout << "open camera" << endl;
        ui->buttom_camera->setText("Close Camera");
        ui->buttom_photo->setEnabled(true);

        m_CameraIsOpened = true;

    }
}

void Frame_Camera::on_buttom_photo_clicked()
{
    QTime time = QTime::currentTime();
    string str = time.toString("HH-mm-ss-zzz").toStdString();
    m_img.save((str + ".jpg").c_str(), "JPG", -1);
    emit addPhoto(str.c_str());
    cout << "take photo" << endl;
}

void Frame_Camera::on_buttom_imageList_clicked()
{
    emit photoList();
}
