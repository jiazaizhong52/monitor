/********************************************************************************
** Form generated from reading UI file 'frame_resistance.ui'
**
** Created: Fri Jul 24 18:31:29 2020
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_RESISTANCE_H
#define UI_FRAME_RESISTANCE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Frame_Resistance
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_resistance;
    QLabel *label_status;
    QPushButton *buttom_viewPlot;
    QTextBrowser *textBrowser;

    void setupUi(QFrame *Frame_Resistance)
    {
        if (Frame_Resistance->objectName().isEmpty())
            Frame_Resistance->setObjectName(QString::fromUtf8("Frame_Resistance"));
        Frame_Resistance->resize(420, 240);
        label = new QLabel(Frame_Resistance);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 421, 21));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Frame_Resistance);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 67, 17));
        label_3 = new QLabel(Frame_Resistance);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 50, 67, 17));
        label_4 = new QLabel(Frame_Resistance);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 90, 91, 17));
        label_5 = new QLabel(Frame_Resistance);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 160, 67, 17));
        label_resistance = new QLabel(Frame_Resistance);
        label_resistance->setObjectName(QString::fromUtf8("label_resistance"));
        label_resistance->setGeometry(QRect(30, 120, 101, 21));
        label_resistance->setFrameShape(QFrame::Box);
        label_resistance->setFrameShadow(QFrame::Plain);
        label_status = new QLabel(Frame_Resistance);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(30, 190, 101, 21));
        label_status->setFrameShape(QFrame::Box);
        buttom_viewPlot = new QPushButton(Frame_Resistance);
        buttom_viewPlot->setObjectName(QString::fromUtf8("buttom_viewPlot"));
        buttom_viewPlot->setGeometry(QRect(298, 40, 111, 31));
        textBrowser = new QTextBrowser(Frame_Resistance);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(159, 80, 251, 150));

        retranslateUi(Frame_Resistance);

        QMetaObject::connectSlotsByName(Frame_Resistance);
    } // setupUi

    void retranslateUi(QFrame *Frame_Resistance)
    {
        Frame_Resistance->setWindowTitle(QApplication::translate("Frame_Resistance", "Frame", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Frame_Resistance", "Resistance", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Frame_Resistance", "Current:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Frame_Resistance", "History:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Frame_Resistance", "resistance:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Frame_Resistance", "status:", 0, QApplication::UnicodeUTF8));
        label_resistance->setText(QApplication::translate("Frame_Resistance", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_status->setText(QApplication::translate("Frame_Resistance", "TextLabel", 0, QApplication::UnicodeUTF8));
        buttom_viewPlot->setText(QApplication::translate("Frame_Resistance", "view plot", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("Frame_Resistance", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Frame_Resistance: public Ui_Frame_Resistance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_RESISTANCE_H
