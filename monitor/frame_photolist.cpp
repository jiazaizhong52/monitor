#include "frame_photolist.h"
#include "ui_frame_photolist.h"

Frame_PhotoList::Frame_PhotoList(Monitor &monitor, QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_PhotoList),
    monitor(monitor)
{
    ui->setupUi(this);
}

Frame_PhotoList::~Frame_PhotoList()
{
    delete ui;
}

void Frame_PhotoList::addPhoto(QString fileName)
{
    cout << "add photo \'" << fileName.toStdString() << "\'" << endl;
    QListWidgetItem *item = new QListWidgetItem;
    item->setText(fileName);
    ui->listWidget->addItem(item);
}

void Frame_PhotoList::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString fileName = item->text();
    QPixmap map(fileName);
    ui->label_photo->setPixmap(map);
}
