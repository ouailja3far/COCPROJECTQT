#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include <QMediaPlayer>
#include <QDebug>
#include <QAudioOutput>
#include "mainwindow.h"


namespace Ui {
class settings;
}

class settings : public QDialog
{
    Q_OBJECT

public:
    explicit settings(QWidget *parent = nullptr);
    ~settings();


private slots:

void on_musicslider_valueChanged(int value);

private:
    Ui::settings *ui;
};

#endif // SETTINGS_H
