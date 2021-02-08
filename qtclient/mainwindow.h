#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QUdpSocket>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_btn_clicked();

    void on_conn_btn_clicked();

    void on_disconn_btn_clicked();

    void on_biu_btn_clicked();

    void process_receiver();

    void update_timeout();

private:
    Ui::MainWindow *ui;
    QTcpSocket tcpSocket_;
    QUdpSocket udpSocket_;
    QTimer timer_;
};
#endif // MAINWINDOW_H
