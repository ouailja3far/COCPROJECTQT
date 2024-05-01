/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QPushButton *start;
    QPushButton *Options;
    QPushButton *exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(759, 337);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(210, 0, 321, 161));
        QFont font;
        font.setPointSize(36);
        title->setFont(font);
        start = new QPushButton(centralwidget);
        start->setObjectName("start");
        start->setGeometry(QRect(310, 173, 101, 31));
        QFont font1;
        font1.setPointSize(18);
        start->setFont(font1);
        Options = new QPushButton(centralwidget);
        Options->setObjectName("Options");
        Options->setGeometry(QRect(310, 210, 101, 41));
        QFont font2;
        font2.setPointSize(16);
        Options->setFont(font2);
        exit = new QPushButton(centralwidget);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(310, 253, 101, 31));
        exit->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 759, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Clash of Clans", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        Options->setText(QCoreApplication::translate("MainWindow", "Options", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
