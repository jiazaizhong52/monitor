/********************************************************************************
** Form generated from reading UI file 'frame_settings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_SETTINGS_H
#define UI_FRAME_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frame_Settings
{
public:
    QFrame *frame;
    QLabel *label;
    QSlider *horizontalSlider;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_fps;
    QFrame *frame_2;
    QLabel *label_5;
    QLabel *label_feedbackR;
    QLabel *label_feedbackPhoto;
    QLabel *label_9;
    QLabel *label_11;
    QFrame *frame_3;
    QLabel *label_7;
    QLabel *label_connection;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLabel *label_address;
    QLabel *label_10;
    QLabel *label_clientID;
    QLabel *label_12;
    QLabel *label_userName;
    QLabel *label_4;

    void setupUi(QFrame *Frame_Settings)
    {
        if (Frame_Settings->objectName().isEmpty())
            Frame_Settings->setObjectName(QString::fromUtf8("Frame_Settings"));
        Frame_Settings->resize(420, 240);
        frame = new QFrame(Frame_Settings);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(220, 130, 171, 91));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 41, 31));
        horizontalSlider = new QSlider(frame);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(30, 30, 111, 31));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(10);
        horizontalSlider->setValue(2);
        horizontalSlider->setSliderPosition(2);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 31, 17));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 60, 31, 17));
        label_fps = new QLabel(frame);
        label_fps->setObjectName(QString::fromUtf8("label_fps"));
        label_fps->setGeometry(QRect(80, 10, 67, 31));
        frame_2 = new QFrame(Frame_Settings);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(220, 40, 171, 81));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 121, 17));
        label_feedbackR = new QLabel(frame_2);
        label_feedbackR->setObjectName(QString::fromUtf8("label_feedbackR"));
        label_feedbackR->setGeometry(QRect(100, 30, 71, 20));
        label_feedbackPhoto = new QLabel(frame_2);
        label_feedbackPhoto->setObjectName(QString::fromUtf8("label_feedbackPhoto"));
        label_feedbackPhoto->setGeometry(QRect(100, 54, 71, 20));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 31, 71, 17));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 54, 51, 17));
        frame_3 = new QFrame(Frame_Settings);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(20, 40, 191, 181));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 141, 21));
        label_connection = new QLabel(frame_3);
        label_connection->setObjectName(QString::fromUtf8("label_connection"));
        label_connection->setGeometry(QRect(150, 10, 51, 21));
        layoutWidget = new QWidget(frame_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 151, 134));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        label_address = new QLabel(layoutWidget);
        label_address->setObjectName(QString::fromUtf8("label_address"));

        verticalLayout->addWidget(label_address);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        label_clientID = new QLabel(layoutWidget);
        label_clientID->setObjectName(QString::fromUtf8("label_clientID"));

        verticalLayout->addWidget(label_clientID);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout->addWidget(label_12);

        label_userName = new QLabel(layoutWidget);
        label_userName->setObjectName(QString::fromUtf8("label_userName"));

        verticalLayout->addWidget(label_userName);

        label_4 = new QLabel(Frame_Settings);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 10, 421, 17));
        label_4->setAlignment(Qt::AlignCenter);

        retranslateUi(Frame_Settings);

        QMetaObject::connectSlotsByName(Frame_Settings);
    } // setupUi

    void retranslateUi(QFrame *Frame_Settings)
    {
        Frame_Settings->setWindowTitle(QApplication::translate("Frame_Settings", "Frame", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Frame_Settings", "FPS:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Frame_Settings", "0.2", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Frame_Settings", "10", 0, QApplication::UnicodeUTF8));
        label_fps->setText(QApplication::translate("Frame_Settings", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Frame_Settings", "Latest Feedback:", 0, QApplication::UnicodeUTF8));
        label_feedbackR->setText(QApplication::translate("Frame_Settings", "TimeOut", 0, QApplication::UnicodeUTF8));
        label_feedbackPhoto->setText(QApplication::translate("Frame_Settings", "TimeOut", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Frame_Settings", "Resistance", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Frame_Settings", "Photo", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Frame_Settings", "Connection:", 0, QApplication::UnicodeUTF8));
        label_connection->setText(QApplication::translate("Frame_Settings", "ON", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Frame_Settings", "Host Address: ", 0, QApplication::UnicodeUTF8));
        label_address->setText(QApplication::translate("Frame_Settings", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Frame_Settings", "Client ID:", 0, QApplication::UnicodeUTF8));
        label_clientID->setText(QApplication::translate("Frame_Settings", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Frame_Settings", "User Name:", 0, QApplication::UnicodeUTF8));
        label_userName->setText(QApplication::translate("Frame_Settings", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Frame_Settings", "Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Frame_Settings: public Ui_Frame_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_SETTINGS_H
