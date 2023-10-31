#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QThread>
void playerSetSource(QMediaPlayer* player)
{
//    QMediaPlayer *player1 = nullptr;
//    QAudioOutput *audioOutput1 = nullptr;
//    player1 = new QMediaPlayer();
//    audioOutput1 = new QAudioOutput();
//    player1->setLoops(-1);
//    player1->setAudioOutput(audioOutput1 );
//    audioOutput1->setVolume(50.0);
    player->setSource(QUrl("C:/Users/wx/Music/music/蓄势.mp3"));
    player->play();

}
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);
    player->setLoops(-1);
    player->setAudioOutput(audioOutput );
    audioOutput->setVolume(5.0);  //调节音频音量
    auto taskThread = QThread::create( playerSetSource,player);
    taskThread->start();
   // player->setSource(QUrl("C:/Users/wx/Music/music/蓄势.mp3"));
    player1 = new QMediaPlayer(this);
    audioOutput1 = new QAudioOutput(this);
    player1->setLoops(-1);
    player1->setAudioOutput(audioOutput1 );
    audioOutput1->setVolume(5.0);  //调节音频音量
    player1->setSource(QUrl("C:/Users/wx/Music/music/風の住む街 (风居住的街道) - 矶村由.mp3"));
    player1->play();


}

MainWindow::~MainWindow()
{
//    player->stop();
    delete ui;
}

