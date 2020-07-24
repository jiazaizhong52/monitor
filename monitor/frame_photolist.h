#ifndef FRAME_PHOTOLIST_H
#define FRAME_PHOTOLIST_H

#include <QFrame>
#include <QListWidget>
#include "monitor.h"

namespace Ui {
class Frame_PhotoList;
}

class Frame_PhotoList : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_PhotoList(Monitor &monitor, QWidget *parent = nullptr);
    ~Frame_PhotoList();

private:
    Ui::Frame_PhotoList *ui;
    Monitor &monitor;

public:

    void addPhoto(QString fileName);

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);
    void on_camera_addPhoto(QString fileName) { addPhoto(fileName); }
};

#endif // FRAME_PHOTOLIST_H
