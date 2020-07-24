#ifndef FRAME_PHOTOLIST_H
#define FRAME_PHOTOLIST_H

#include <QFrame>

namespace Ui {
class Frame_PhotoList;
}

class Frame_PhotoList : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_PhotoList(QWidget *parent = nullptr);
    ~Frame_PhotoList();

private:
    Ui::Frame_PhotoList *ui;
};

#endif // FRAME_PHOTOLIST_H
