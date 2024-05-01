#include "game.h"
#include "mainwindow.h"

#include <QApplication>
//#include <QMediaPlayer>
//#include <QAudioOutput>
//#include <QSoundEffect>

// QAudioOutput* background_output;
game* game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
