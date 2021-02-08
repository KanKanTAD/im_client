/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *name_edit;
    QLabel *label_2;
    QLineEdit *pass_edit;
    QPushButton *login_btn;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *host_edit;
    QLabel *label_4;
    QLineEdit *port_edit;
    QLabel *label_5;
    QLineEdit *bee_edit;
    QPushButton *conn_btn;
    QPushButton *disconn_btn;
    QPushButton *biu_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 161, 111));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        name_edit = new QLineEdit(widget);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));

        verticalLayout->addWidget(name_edit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        pass_edit = new QLineEdit(widget);
        pass_edit->setObjectName(QString::fromUtf8("pass_edit"));

        verticalLayout->addWidget(pass_edit);

        login_btn = new QPushButton(widget);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));

        verticalLayout->addWidget(login_btn);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(240, 10, 151, 215));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        host_edit = new QLineEdit(widget1);
        host_edit->setObjectName(QString::fromUtf8("host_edit"));

        verticalLayout_2->addWidget(host_edit);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        port_edit = new QLineEdit(widget1);
        port_edit->setObjectName(QString::fromUtf8("port_edit"));

        verticalLayout_2->addWidget(port_edit);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        bee_edit = new QLineEdit(widget1);
        bee_edit->setObjectName(QString::fromUtf8("bee_edit"));

        verticalLayout_2->addWidget(bee_edit);

        conn_btn = new QPushButton(widget1);
        conn_btn->setObjectName(QString::fromUtf8("conn_btn"));

        verticalLayout_2->addWidget(conn_btn);

        disconn_btn = new QPushButton(widget1);
        disconn_btn->setObjectName(QString::fromUtf8("disconn_btn"));

        verticalLayout_2->addWidget(disconn_btn);

        biu_btn = new QPushButton(widget1);
        biu_btn->setObjectName(QString::fromUtf8("biu_btn"));

        verticalLayout_2->addWidget(biu_btn);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "account:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "password:", nullptr));
        login_btn->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "host:", nullptr));
        host_edit->setText(QCoreApplication::translate("MainWindow", "9.135.98.122", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "port:", nullptr));
        port_edit->setText(QCoreApplication::translate("MainWindow", "6789", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "bee", nullptr));
        bee_edit->setText(QCoreApplication::translate("MainWindow", "300", nullptr));
        conn_btn->setText(QCoreApplication::translate("MainWindow", "connect", nullptr));
        disconn_btn->setText(QCoreApplication::translate("MainWindow", "disconnect", nullptr));
        biu_btn->setText(QCoreApplication::translate("MainWindow", "biu biu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
