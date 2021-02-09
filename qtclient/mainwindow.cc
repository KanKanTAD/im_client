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

void MainWindow::_get_connect_info(ConnectInfo &info)
{
   info.set_host(ui->host_edit->text());
   info.set_port(ui->port_edit->text());
   info.set_beat_dur(ui->bee_edit->text());
   info.set_account(ui->name_edit->text());
   info.set_password(ui->pass_edit->text());
   info.set_timeout(ui->timeout_edit->text());
   info.set_retry_times(ui->retrytimes_edit->text());
}

void MainWindow::_send_msg(const QString & msg)
{
    ConnectInfo info;
    _get_connect_info(info);
    udpSocket_.writeDatagram(msg.toUtf8().data(),
                             msg.size(),
                             QHostAddress(info.get_host()),
                             info.get_port());
    qDebug()<< tr("sendmsg to '%1:%2' [%3]").arg(info.get_host()).arg(info.get_port()).arg(msg);
}


void MainWindow::on_login_btn_clicked()
{
    auto name_ = this->ui->name_edit->text();
    auto pass_ = this->ui->pass_edit->text();
    qInfo()<<QString("name is %1 ; pass is %2").arg(name_).arg(pass_);
}

void MainWindow::on_conn_btn_clicked()
{
    ConnectInfo info;
    _get_connect_info(info);
    timer_.start(info.get_beat_dur());
}


void MainWindow::on_disconn_btn_clicked()
{
    timer_.stop();
}

void MainWindow::on_biu_btn_clicked()
{
    _send_msg("biu-biu");
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
    static unsigned int count = 0;
    count += 1;
    auto msg = tr("beat[%1]").arg(count);
    _send_msg(msg);
    qDebug()<<tr("beat server msg:[%1]").arg(msg);
}
