#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>
#include "settings.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QMediaPlayer* background;
    QAudioOutput* background_output;


private slots:
    void on_exit_clicked();

    void on_Options_clicked();


    void on_start_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
