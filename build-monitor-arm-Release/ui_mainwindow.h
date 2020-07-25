/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Jul 25 08:13:01 2020
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
    QAction *actionview_photoList;
    QAction *actionview_resistancePlot;
    QAction *actionlogin;
    QAction *actionsettings;
    QAction *actionexit;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menuBar;
    QMenu *menuview;
    QMenu *menumain;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 270);
        actionview_resistance = new QAction(MainWindow);
        actionview_resistance->setObjectName(QString::fromUtf8("actionview_resistance"));
        actionview_camera = new QAction(MainWindow);
        actionview_camera->setObjectName(QString::fromUtf8("actionview_camera"));
        actionview_photoList = new QAction(MainWindow);
        actionview_photoList->setObjectName(QString::fromUtf8("actionview_photoList"));
        actionview_resistancePlot = new QAction(MainWindow);
        actionview_resistancePlot->setObjectName(QString::fromUtf8("actionview_resistancePlot"));
        actionlogin = new QAction(MainWindow);
        actionlogin->setObjectName(QString::fromUtf8("actionlogin"));
        actionsettings = new QAction(MainWindow);
        actionsettings->setObjectName(QString::fromUtf8("actionsettings"));
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
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
        menumain = new QMenu(menuBar);
        menumain->setObjectName(QString::fromUtf8("menumain"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menumain->menuAction());
        menuBar->addAction(menuview->menuAction());
        menuview->addAction(actionview_resistance);
        menuview->addAction(actionview_resistancePlot);
        menuview->addAction(actionview_camera);
        menuview->addAction(actionview_photoList);
        menumain->addAction(actionlogin);
        menumain->addSeparator();
        menumain->addAction(actionsettings);
        menumain->addSeparator();
        menumain->addAction(actionexit);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionview_resistance->setText(QApplication::translate("MainWindow", "view resistance", 0, QApplication::UnicodeUTF8));
        actionview_camera->setText(QApplication::translate("MainWindow", "view camera", 0, QApplication::UnicodeUTF8));
        actionview_photoList->setText(QApplication::translate("MainWindow", "view photoList", 0, QApplication::UnicodeUTF8));
        actionview_resistancePlot->setText(QApplication::translate("MainWindow", "view resistancePlot", 0, QApplication::UnicodeUTF8));
        actionlogin->setText(QApplication::translate("MainWindow", "login", 0, QApplication::UnicodeUTF8));
        actionsettings->setText(QApplication::translate("MainWindow", "settings", 0, QApplication::UnicodeUTF8));
        actionexit->setText(QApplication::translate("MainWindow", "exit", 0, QApplication::UnicodeUTF8));
        menuview->setTitle(QApplication::translate("MainWindow", "view", 0, QApplication::UnicodeUTF8));
        menumain->setTitle(QApplication::translate("MainWindow", "main", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
