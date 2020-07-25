/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
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
#include <QtGui/QToolBar>
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
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 270);
        actionview_resistance = new QAction(MainWindow);
        actionview_resistance->setObjectName(QString::fromUtf8("actionview_resistance"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/resistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionview_resistance->setIcon(icon);
        actionview_camera = new QAction(MainWindow);
        actionview_camera->setObjectName(QString::fromUtf8("actionview_camera"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/ar-camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionview_camera->setIcon(icon1);
        actionview_photoList = new QAction(MainWindow);
        actionview_photoList->setObjectName(QString::fromUtf8("actionview_photoList"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/art.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionview_photoList->setIcon(icon2);
        actionview_resistancePlot = new QAction(MainWindow);
        actionview_resistancePlot->setObjectName(QString::fromUtf8("actionview_resistancePlot"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/plot(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionview_resistancePlot->setIcon(icon3);
        actionlogin = new QAction(MainWindow);
        actionlogin->setObjectName(QString::fromUtf8("actionlogin"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionlogin->setIcon(icon4);
        actionsettings = new QAction(MainWindow);
        actionsettings->setObjectName(QString::fromUtf8("actionsettings"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsettings->setIcon(icon5);
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionexit->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 420, 240));
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
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::RightToolBarArea, toolBar);

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
        toolBar->addAction(actionview_resistance);
        toolBar->addAction(actionview_resistancePlot);
        toolBar->addAction(actionview_camera);
        toolBar->addAction(actionview_photoList);
        toolBar->addAction(actionlogin);
        toolBar->addAction(actionsettings);
        toolBar->addAction(actionexit);

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
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
