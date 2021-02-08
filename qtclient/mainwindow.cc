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
    if(socket_.isOpen()){
        socket_.close();
    }
}


void MainWindow::on_login_btn_clicked()
{
    auto name_ = this->ui->name_edit->text();
    auto pass_ = this->ui->pass_edit->text();
    qInfo()<<QString("name is %1 ; pass is %2").arg(name_).arg(pass_);



}
