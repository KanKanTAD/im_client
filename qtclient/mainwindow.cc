#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    if(udpSocket_.isOpen()){
        udpSocket_.close();
    }
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
}




void MainWindow::on_disconn_btn_clicked()
{
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
