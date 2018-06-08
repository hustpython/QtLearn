#include "loginwindow.h"
#include "ui_loginwindow.h"

loginwindow::loginwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginwindow)
{
    ui->setupUi(this);
}

loginwindow::~loginwindow()
{
    delete ui;
}
