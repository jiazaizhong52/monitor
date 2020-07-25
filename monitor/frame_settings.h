#ifndef FRAME_SETTINGS_H
#define FRAME_SETTINGS_H

#include <QFrame>

namespace Ui {
class Frame_Settings;
}

class Frame_Settings : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_Settings(QWidget *parent = nullptr);
    ~Frame_Settings();

private:
    Ui::Frame_Settings *ui;
};

#endif // FRAME_SETTINGS_H
