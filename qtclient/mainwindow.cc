#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&udpSocket_,SIGNAL(readyRead()),this,SLOT(process_receiver()));
    connect(&timer_,SIGNAL(timeout()),this,SLOT(update_timeout()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_btn_clicked()
{
    auto name_ = this->ui->name_edit->text();
    auto pass_ = this->ui->pass_edit->text();
    qInfo()<<QString("name is %1 ; pass is %2").arg(name_).arg(pass_);
}

void MainWindow::on_conn_btn_clicked()
{
    auto host_ = this->ui->host_edit->text();
    auto port_ = this->ui->port_edit->text();
    auto bee_ = this->ui->port_edit->text();
    qInfo()<<QString("connect to %1:%2; by bee %3").arg(host_).arg(port_).arg(bee_);
    // set heartbeat
    timer_.start(bee_.toInt());
}




void MainWindow::on_disconn_btn_clicked()
{
    timer_.stop();
}

void MainWindow::on_biu_btn_clicked()
{
    auto host_ = this->ui->host_edit->text();
    auto port_ = this->ui->port_edit->text();
    QByteArray datagram = "biu-biu";
    udpSocket_.writeDatagram(datagram.data(),
                             datagram.size(),
                             QHostAddress(host_),
                             port_.toUInt());
    qDebug()<<QString("biu-biu to %1:%2;").arg(host_).arg(port_);
}

void MainWindow::process_receiver()
{
    while(udpSocket_.hasPendingDatagrams()){
        QByteArray datagram;
        datagram.resize(udpSocket_.pendingDatagramSize());
        udpSocket_.readDatagram(datagram.data(),datagram.size());
        qDebug()<<QString("recive data:[%1]").arg(datagram.data());
    }
}

void MainWindow::update_timeout()
{
    static int count = 0;
    count += 1;
    qDebug()<<QString("beat! %1").arg(count);
}
