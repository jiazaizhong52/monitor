/********************************************************************************
** Form generated from reading UI file 'frame_login.ui'
**
** Created: Sat Jul 25 16:38:56 2020
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_LOGIN_H
#define UI_FRAME_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frame_Login
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *buttom6;
    QPushButton *buttom5;
    QPushButton *buttom2;
    QPushButton *buttom9;
    QPushButton *buttom4;
    QPushButton *buttom8;
    QPushButton *buttom1;
    QPushButton *buttom3;
    QPushButton *buttom7;
    QPushButton *buttom0;
    QPushButton *buttom_connect;
    QPushButton *buttom_back;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *edit_userName;
    QLabel *label_3;
    QLineEdit *edit_key;

    void setupUi(QFrame *Frame_Login)
    {
        if (Frame_Login->objectName().isEmpty())
            Frame_Login->setObjectName(QString::fromUtf8("Frame_Login"));
        Frame_Login->resize(420, 240);
        label = new QLabel(Frame_Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 421, 20));
        label->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(Frame_Login);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(200, 50, 201, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttom6 = new QPushButton(gridLayoutWidget);
        buttom6->setObjectName(QString::fromUtf8("buttom6"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttom6->sizePolicy().hasHeightForWidth());
        buttom6->setSizePolicy(sizePolicy);
        buttom6->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttom6, 1, 2, 1, 1);

        buttom5 = new QPushButton(gridLayoutWidget);
        buttom5->setObjectName(QString::fromUtf8("buttom5"));
        sizePolicy.setHeightForWidth(buttom5->sizePolicy().hasHeightForWidth());
        buttom5->setSizePolicy(sizePolicy);
        buttom5->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttom5, 1, 1, 1, 1);

        buttom2 = new QPushButton(gridLayoutWidget);
        buttom2->setObjectName(QString::fromUtf8("buttom2"));
        sizePolicy.setHeightForWidth(buttom2->sizePolicy().hasHeightForWidth());
        buttom2->setSizePolicy(sizePolicy);
        buttom2->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttom2, 0, 1, 1, 1);

        buttom9 = new QPushButton(gridLayoutWidget);
        buttom9->setObjectName(QString::fromUtf8("buttom9"));
        sizePolicy.setHeightForWidth(buttom9->sizePolicy().hasHeightForWidth());
        buttom9->setSizePolicy(sizePolicy);
        buttom9->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttom9, 2, 2, 1, 1);

        buttom4 = new QPushButton(gridLayoutWidget);
        buttom4->setObjectName(QString::fromUtf8("buttom4"));
        sizePolicy.setHeightForWidth(buttom4->sizePolicy().hasHeightForWidth());
        buttom4->setSizePolicy(sizePolicy);
        buttom4->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttom4, 1, 0, 1, 1);

        buttom8 = new QPushButton(gridLayoutWidget);
        buttom8->setObjectName(QString::fromUtf8("buttom8"));
        sizePolicy.setHeightForWidth(buttom8->sizePolicy().hasHeightForWidth());
        buttom8->setSizePolicy(sizePolicy);
        buttom8->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttom8, 2, 1, 1, 1);

        buttom1 = new QPushButton(gridLayoutWidget);
        buttom1->setObjectName(QString::fromUtf8("buttom1"));
        sizePolicy.setHeightForWidth(buttom1->sizePolicy().hasHeightForWidth());
        buttom1->setSizePolicy(sizePolicy);
        buttom1->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttom1, 0, 0, 1, 1);

        buttom3 = new QPushButton(gridLayoutWidget);
        buttom3->setObjectName(QString::fromUtf8("buttom3"));
        sizePolicy.setHeightForWidth(buttom3->sizePolicy().hasHeightForWidth());
        buttom3->setSizePolicy(sizePolicy);
        buttom3->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttom3, 0, 2, 1, 1);

        buttom7 = new QPushButton(gridLayoutWidget);
        buttom7->setObjectName(QString::fromUtf8("buttom7"));
        sizePolicy.setHeightForWidth(buttom7->sizePolicy().hasHeightForWidth());
        buttom7->setSizePolicy(sizePolicy);
        buttom7->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttom7, 2, 0, 1, 1);

        buttom0 = new QPushButton(gridLayoutWidget);
        buttom0->setObjectName(QString::fromUtf8("buttom0"));
        sizePolicy.setHeightForWidth(buttom0->sizePolicy().hasHeightForWidth());
        buttom0->setSizePolicy(sizePolicy);
        buttom0->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttom0, 3, 1, 1, 1);

        buttom_connect = new QPushButton(gridLayoutWidget);
        buttom_connect->setObjectName(QString::fromUtf8("buttom_connect"));
        sizePolicy.setHeightForWidth(buttom_connect->sizePolicy().hasHeightForWidth());
        buttom_connect->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttom_connect, 3, 2, 1, 1);

        buttom_back = new QPushButton(gridLayoutWidget);
        buttom_back->setObjectName(QString::fromUtf8("buttom_back"));
        sizePolicy.setHeightForWidth(buttom_back->sizePolicy().hasHeightForWidth());
        buttom_back->setSizePolicy(sizePolicy);
        buttom_back->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(buttom_back, 3, 0, 1, 1);

        layoutWidget = new QWidget(Frame_Login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 151, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        edit_userName = new QLineEdit(layoutWidget);
        edit_userName->setObjectName(QString::fromUtf8("edit_userName"));

        verticalLayout->addWidget(edit_userName);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        edit_key = new QLineEdit(layoutWidget);
        edit_key->setObjectName(QString::fromUtf8("edit_key"));

        verticalLayout->addWidget(edit_key);


        retranslateUi(Frame_Login);

        QMetaObject::connectSlotsByName(Frame_Login);
    } // setupUi

    void retranslateUi(QFrame *Frame_Login)
    {
        Frame_Login->setWindowTitle(QApplication::translate("Frame_Login", "Frame", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Frame_Login", "Log in", 0, QApplication::UnicodeUTF8));
        buttom6->setText(QApplication::translate("Frame_Login", "6", 0, QApplication::UnicodeUTF8));
        buttom5->setText(QApplication::translate("Frame_Login", "5", 0, QApplication::UnicodeUTF8));
        buttom2->setText(QApplication::translate("Frame_Login", "2", 0, QApplication::UnicodeUTF8));
        buttom9->setText(QApplication::translate("Frame_Login", "9", 0, QApplication::UnicodeUTF8));
        buttom4->setText(QApplication::translate("Frame_Login", "4", 0, QApplication::UnicodeUTF8));
        buttom8->setText(QApplication::translate("Frame_Login", "8", 0, QApplication::UnicodeUTF8));
        buttom1->setText(QApplication::translate("Frame_Login", "1", 0, QApplication::UnicodeUTF8));
        buttom3->setText(QApplication::translate("Frame_Login", "3", 0, QApplication::UnicodeUTF8));
        buttom7->setText(QApplication::translate("Frame_Login", "7", 0, QApplication::UnicodeUTF8));
        buttom0->setText(QApplication::translate("Frame_Login", "0", 0, QApplication::UnicodeUTF8));
        buttom_connect->setText(QApplication::translate("Frame_Login", "OK", 0, QApplication::UnicodeUTF8));
        buttom_back->setText(QApplication::translate("Frame_Login", "<", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Frame_Login", "User name", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Frame_Login", "key", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Frame_Login: public Ui_Frame_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_LOGIN_H
