/********************************************************************************
** Form generated from reading UI file 'dialog_login.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_LOGIN_H
#define UI_DIALOG_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Login
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_Login)
    {
        if (Dialog_Login->objectName().isEmpty())
            Dialog_Login->setObjectName(QString::fromUtf8("Dialog_Login"));
        Dialog_Login->resize(320, 240);
        buttonBox = new QDialogButtonBox(Dialog_Login);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 200, 301, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Dialog_Login);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_Login, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_Login, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_Login);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Login)
    {
        Dialog_Login->setWindowTitle(QApplication::translate("Dialog_Login", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Login: public Ui_Dialog_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_LOGIN_H
