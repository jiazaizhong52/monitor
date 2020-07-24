#ifndef FRAME_CAMERA_H
#define FRAME_CAMERA_H

#include <QFrame>

namespace Ui {
class Frame_Camera;
}

class Frame_Camera : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_Camera(QWidget *parent = nullptr);
    ~Frame_Camera();

private:
    Ui::Frame_Camera *ui;
};

#endif // FRAME_CAMERA_H
