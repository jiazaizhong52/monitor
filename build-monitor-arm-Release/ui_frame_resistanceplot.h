/********************************************************************************
** Form generated from reading UI file 'frame_resistanceplot.ui'
**
** Created: Sat Jul 25 16:38:56 2020
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_RESISTANCEPLOT_H
#define UI_FRAME_RESISTANCEPLOT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Frame_ResistancePlot
{
public:
    QLabel *label_photo;
    QLabel *label;

    void setupUi(QFrame *Frame_ResistancePlot)
    {
        if (Frame_ResistancePlot->objectName().isEmpty())
            Frame_ResistancePlot->setObjectName(QString::fromUtf8("Frame_ResistancePlot"));
        Frame_ResistancePlot->resize(420, 240);
        label_photo = new QLabel(Frame_ResistancePlot);
        label_photo->setObjectName(QString::fromUtf8("label_photo"));
        label_photo->setGeometry(QRect(20, 50, 380, 180));
        label_photo->setFrameShape(QFrame::StyledPanel);
        label_photo->setAlignment(Qt::AlignCenter);
        label = new QLabel(Frame_ResistancePlot);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 421, 20));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Frame_ResistancePlot);

        QMetaObject::connectSlotsByName(Frame_ResistancePlot);
    } // setupUi

    void retranslateUi(QFrame *Frame_ResistancePlot)
    {
        Frame_ResistancePlot->setWindowTitle(QApplication::translate("Frame_ResistancePlot", "Frame", 0, QApplication::UnicodeUTF8));
        label_photo->setText(QApplication::translate("Frame_ResistancePlot", "plot", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Frame_ResistancePlot", "Resistance Plot", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Frame_ResistancePlot: public Ui_Frame_ResistancePlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_RESISTANCEPLOT_H
