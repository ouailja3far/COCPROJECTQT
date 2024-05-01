#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settings.h"
#include <QMediaPlayer>
#include <QAudioOutput>
#include "game.h"
#include <QCoreApplication>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    background_output = new QAudioOutput;
    background_output->setVolume(50);
    background = new QMediaPlayer();
    background->setAudioOutput(background_output);
    background->setSource(QUrl("qrc:/new/prefix1/Kashido - Prelude Op 28 No 4.mp3"));
    background->play();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exit_clicked()
{
    QCoreApplication::quit();
}

void MainWindow::on_Options_clicked()
{
    hide();
    class settings settings;
    settings.setModal(true);
    settings.exec();
}


void MainWindow::on_start_clicked()
{
    hide();
    game* game = new class game();
    game->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    game->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    game->show();

}

