#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QMediaPlayer *player = nullptr;
    QAudioOutput *audioOutput = nullptr;
    QMediaPlayer *player1 = nullptr;
    QAudioOutput *audioOutput1 = nullptr;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

//    QThread* taskThread;
};
#endif // MAINWINDOW_H
