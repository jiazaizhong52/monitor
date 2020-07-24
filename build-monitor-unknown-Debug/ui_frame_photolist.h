/********************************************************************************
** Form generated from reading UI file 'frame_photolist.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_PHOTOLIST_H
#define UI_FRAME_PHOTOLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_Frame_PhotoList
{
public:
    QListWidget *listWidget;
    QLabel *label_photo;
    QLabel *label;

    void setupUi(QFrame *Frame_PhotoList)
    {
        if (Frame_PhotoList->objectName().isEmpty())
            Frame_PhotoList->setObjectName(QString::fromUtf8("Frame_PhotoList"));
        Frame_PhotoList->resize(420, 240);
        listWidget = new QListWidget(Frame_PhotoList);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 51, 131, 171));
        label_photo = new QLabel(Frame_PhotoList);
        label_photo->setObjectName(QString::fromUtf8("label_photo"));
        label_photo->setGeometry(QRect(150, 50, 251, 171));
        label_photo->setFrameShape(QFrame::StyledPanel);
        label_photo->setAlignment(Qt::AlignCenter);
        label = new QLabel(Frame_PhotoList);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 421, 20));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Frame_PhotoList);

        QMetaObject::connectSlotsByName(Frame_PhotoList);
    } // setupUi

    void retranslateUi(QFrame *Frame_PhotoList)
    {
        Frame_PhotoList->setWindowTitle(QApplication::translate("Frame_PhotoList", "Frame", 0, QApplication::UnicodeUTF8));
        label_photo->setText(QApplication::translate("Frame_PhotoList", "Open file to view photo", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Frame_PhotoList", "Photo List", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Frame_PhotoList: public Ui_Frame_PhotoList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_PHOTOLIST_H
