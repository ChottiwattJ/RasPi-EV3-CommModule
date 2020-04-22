#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logindialog.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_userloginBtn_clicked()
{
    QString stdusername = ui->stduserlineEdit->text();
    QString stdpassword = ui->userpasslineEdit->text();
    QString stdstudentid = ui->useridlineEdit->text();

    if(stdusername == "debug" && stdpassword =="debug" && stdstudentid == "debug"){
        loginDialog dlg;
        dlg.setModal(true);
        dlg.exec();

    }else{
        QMessageBox::critical(this, "Student Login", "Credentials Mismatched");
    }
}

void MainWindow::on_adminloginButton_clicked()
{
    QString admhost = ui->adminhostlineEdit->text();
    QString admusername = ui->adminuserlineEdit->text();
    QString admpassword = ui->adminpasslineEdit->text();
    QString admpin = ui->adminpinlineEdit->text();

    if(admhost == "debug" && admusername =="debug" && admpassword == "debug" && admpin == "debug"){
        QMessageBox::information(this, "ALS Login", "Credentials Matched");
    }else{
        QMessageBox::critical(this, "ALS Login", "Credentials Mismatched");
    }
}

void MainWindow::on_logreqBtn_clicked()
{
    QString remotehost = ui->remotehostlineEdit->text();
    QString remoteip = ui->remoteIPlineEdit->text();
    QString remotemac = ui->remotemaclineEdit->text();
    QString remotecp = ui->remoteCPlineEdit->text();
    QString remotesignature = ui->remotesignaturelineEdit->text();
    QString remoteusername = ui->remoteuserlineEdit->text();
    QString remotepassword = ui->remotepasslineEdit->text();
    QString verify = ui->verifylineEdit->text();

    if(remotehost == "remoteServer" && remotemac =="debug" && remotecp == "Zebra message valid. Banjo shadow driver." && remotesignature == "c8-91-13-76-f2-e7-0a-89" && remoteusername == "pi" && remotepassword == "PCSHSLOEI" && verify == "RPi3"){
        QMessageBox::critical(this, "ALS Remote Server", "RPi3 Secure Shell denied SSH Connection Request. SSH Remote Connection disabled by developer");
    }else{
        QMessageBox::critical(this, "ALS Remote Server", "Credentials Mismatched");
    }
}
