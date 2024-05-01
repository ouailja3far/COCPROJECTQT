/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QLabel *title;
    QLabel *music;
    QSlider *musicslider;
    QGroupBox *groupBox;
    QLabel *map1;
    QLabel *map2;
    QLabel *map3;
    QSpinBox *mapchoice;

    void setupUi(QDialog *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName("settings");
        settings->resize(464, 341);
        title = new QLabel(settings);
        title->setObjectName("title");
        title->setGeometry(QRect(110, 10, 141, 41));
        QFont font;
        font.setPointSize(26);
        title->setFont(font);
        music = new QLabel(settings);
        music->setObjectName("music");
        music->setGeometry(QRect(20, 90, 51, 21));
        QFont font1;
        font1.setPointSize(12);
        music->setFont(font1);
        musicslider = new QSlider(settings);
        musicslider->setObjectName("musicslider");
        musicslider->setGeometry(QRect(120, 90, 160, 22));
        musicslider->setMaximum(50);
        musicslider->setValue(50);
        musicslider->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(settings);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 180, 431, 151));
        map1 = new QLabel(groupBox);
        map1->setObjectName("map1");
        map1->setGeometry(QRect(50, 50, 41, 16));
        map2 = new QLabel(groupBox);
        map2->setObjectName("map2");
        map2->setGeometry(QRect(170, 50, 49, 16));
        map3 = new QLabel(groupBox);
        map3->setObjectName("map3");
        map3->setGeometry(QRect(300, 50, 49, 16));
        mapchoice = new QSpinBox(groupBox);
        mapchoice->setObjectName("mapchoice");
        mapchoice->setGeometry(QRect(170, 120, 42, 22));

        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QDialog *settings)
    {
        settings->setWindowTitle(QCoreApplication::translate("settings", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("settings", "Options", nullptr));
        music->setText(QCoreApplication::translate("settings", "Music", nullptr));
        groupBox->setTitle(QCoreApplication::translate("settings", "Maps", nullptr));
        map1->setText(QCoreApplication::translate("settings", "map1", nullptr));
        map2->setText(QCoreApplication::translate("settings", "map2", nullptr));
        map3->setText(QCoreApplication::translate("settings", "map3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
