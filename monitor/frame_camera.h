#ifndef FRAME_CAMERA_H
#define FRAME_CAMERA_H

#include <QFrame>
#include "monitor.h"

namespace Ui {
class Frame_Camera;
}

class Frame_Camera : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_Camera(Monitor &monitor, QWidget *parent = NULL);
    ~Frame_Camera();

private:
    Ui::Frame_Camera *ui;
    QImage m_img;
    Monitor &monitor;

public:

    void updataData();

private slots:
    void on_buttom_camera_clicked();
    void on_buttom_photo_clicked();

signals:
    void addPhoto(QString fileName);
};

#endif // FRAME_CAMERA_H
