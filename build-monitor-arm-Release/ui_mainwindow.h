/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Jul 24 15:31:32 2020
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionview_resistance;
    QAction *actionview_camera;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menuBar;
    QMenu *menuview;
    QMenu *menulogin;
    QMenu *menusettings;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 270);
        actionview_resistance = new QAction(MainWindow);
        actionview_resistance->setObjectName(QString::fromUtf8("actionview_resistance"));
        actionview_camera = new QAction(MainWindow);
        actionview_camera->setObjectName(QString::fromUtf8("actionview_camera"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 420, 240));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 28));
        menuview = new QMenu(menuBar);
        menuview->setObjectName(QString::fromUtf8("menuview"));
        menulogin = new QMenu(menuBar);
        menulogin->setObjectName(QString::fromUtf8("menulogin"));
        menusettings = new QMenu(menuBar);
        menusettings->setObjectName(QString::fromUtf8("menusettings"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menulogin->menuAction());
        menuBar->addAction(menuview->menuAction());
        menuBar->addAction(menusettings->menuAction());
        menuview->addAction(actionview_resistance);
        menuview->addAction(actionview_camera);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionview_resistance->setText(QApplication::translate("MainWindow", "view resistance", 0, QApplication::UnicodeUTF8));
        actionview_camera->setText(QApplication::translate("MainWindow", "view camera", 0, QApplication::UnicodeUTF8));
        menuview->setTitle(QApplication::translate("MainWindow", "view", 0, QApplication::UnicodeUTF8));
        menulogin->setTitle(QApplication::translate("MainWindow", "login", 0, QApplication::UnicodeUTF8));
        menusettings->setTitle(QApplication::translate("MainWindow", "settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
