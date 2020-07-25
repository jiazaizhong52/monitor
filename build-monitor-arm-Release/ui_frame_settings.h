/********************************************************************************
** Form generated from reading UI file 'frame_settings.ui'
**
** Created: Sat Jul 25 08:13:01 2020
**      by: Qt User Interface Compiler version 4.7.1
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

QT_BEGIN_NAMESPACE

class Ui_Frame_Settings
{
public:
    QFrame *frame;
    QLabel *label;
    QSlider *horizontalSlider;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame_2;
    QFrame *frame_3;
    QLabel *label_4;

    void setupUi(QFrame *Frame_Settings)
    {
        if (Frame_Settings->objectName().isEmpty())
            Frame_Settings->setObjectName(QString::fromUtf8("Frame_Settings"));
        Frame_Settings->resize(420, 240);
        frame = new QFrame(Frame_Settings);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(240, 110, 151, 111));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 101, 31));
        horizontalSlider = new QSlider(frame);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 40, 101, 31));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(10);
        horizontalSlider->setValue(2);
        horizontalSlider->setSliderPosition(2);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 31, 17));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 80, 31, 17));
        frame_2 = new QFrame(Frame_Settings);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(240, 40, 151, 61));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(Frame_Settings);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(20, 40, 211, 181));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
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
        label_4->setText(QApplication::translate("Frame_Settings", "Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Frame_Settings: public Ui_Frame_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_SETTINGS_H
