/********************************************************************************
** Form generated from reading UI file 'frame_resistanceplot.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
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

QT_BEGIN_NAMESPACE

class Ui_Frame_ResistancePlot
{
public:

    void setupUi(QFrame *Frame_ResistancePlot)
    {
        if (Frame_ResistancePlot->objectName().isEmpty())
            Frame_ResistancePlot->setObjectName(QString::fromUtf8("Frame_ResistancePlot"));
        Frame_ResistancePlot->resize(400, 300);

        retranslateUi(Frame_ResistancePlot);

        QMetaObject::connectSlotsByName(Frame_ResistancePlot);
    } // setupUi

    void retranslateUi(QFrame *Frame_ResistancePlot)
    {
        Frame_ResistancePlot->setWindowTitle(QApplication::translate("Frame_ResistancePlot", "Frame", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Frame_ResistancePlot: public Ui_Frame_ResistancePlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_RESISTANCEPLOT_H
