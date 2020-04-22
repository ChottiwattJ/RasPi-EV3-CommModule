#include "logindialog.h"
#include "ui_logindialog.h"
#include "bookwindow.h"

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
}

loginDialog::~loginDialog()
{
    delete ui;
}

void loginDialog::on_pushButton_2_clicked()
{
    this->close();
}

void loginDialog::on_pushButton_clicked()
{
    BookWindow dlg;
    this->close();
    dlg.show();
}
