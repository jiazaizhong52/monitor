/********************************************************************************
** Form generated from reading UI file 'frame_camera.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_CAMERA_H
#define UI_FRAME_CAMERA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frame_Camera
{
public:
    QLabel *label_photo;
    QLabel *label_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *buttom_camera;
    QPushButton *buttom_photo;
    QPushButton *buttom_imageList;

    void setupUi(QFrame *Frame_Camera)
    {
        if (Frame_Camera->objectName().isEmpty())
            Frame_Camera->setObjectName(QString::fromUtf8("Frame_Camera"));
        Frame_Camera->resize(420, 240);
        label_photo = new QLabel(Frame_Camera);
        label_photo->setObjectName(QString::fromUtf8("label_photo"));
        label_photo->setGeometry(QRect(150, 50, 251, 171));
        label_photo->setFrameShape(QFrame::StyledPanel);
        label_photo->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Frame_Camera);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 10, 421, 20));
        label_2->setAlignment(Qt::AlignCenter);
        widget = new QWidget(Frame_Camera);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 50, 111, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        buttom_camera = new QPushButton(widget);
        buttom_camera->setObjectName(QString::fromUtf8("buttom_camera"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttom_camera->sizePolicy().hasHeightForWidth());
        buttom_camera->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(buttom_camera);

        buttom_photo = new QPushButton(widget);
        buttom_photo->setObjectName(QString::fromUtf8("buttom_photo"));
        sizePolicy.setHeightForWidth(buttom_photo->sizePolicy().hasHeightForWidth());
        buttom_photo->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(buttom_photo);

        buttom_imageList = new QPushButton(widget);
        buttom_imageList->setObjectName(QString::fromUtf8("buttom_imageList"));
        sizePolicy.setHeightForWidth(buttom_imageList->sizePolicy().hasHeightForWidth());
        buttom_imageList->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(buttom_imageList);


        retranslateUi(Frame_Camera);

        QMetaObject::connectSlotsByName(Frame_Camera);
    } // setupUi

    void retranslateUi(QFrame *Frame_Camera)
    {
        Frame_Camera->setWindowTitle(QApplication::translate("Frame_Camera", "Frame", 0, QApplication::UnicodeUTF8));
        label_photo->setText(QApplication::translate("Frame_Camera", "Open camera to view photo", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Frame_Camera", "Camera", 0, QApplication::UnicodeUTF8));
        buttom_camera->setText(QApplication::translate("Frame_Camera", "Open Camera", 0, QApplication::UnicodeUTF8));
        buttom_photo->setText(QApplication::translate("Frame_Camera", "Take Photo", 0, QApplication::UnicodeUTF8));
        buttom_imageList->setText(QApplication::translate("Frame_Camera", "Photo List", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Frame_Camera: public Ui_Frame_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_CAMERA_H
