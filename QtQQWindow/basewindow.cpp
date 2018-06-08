#include "basewindow.h"
#include <QDesktopWidget>
#include <QApplication>
#include <QStyleOption>
#include <QPainter>
#include <QFile>

BaseWindow::BaseWindow(QWidget *parent)
    : QDialog(parent)
{
    this->setWindowFlag(Qt::FramelessWindowHint | Qt::WindowMaximizeButtonHint);
    setAttribute(Qt::WA_TranslucentBackground);
    initTitleBar();
}
void BaseWindow::initTitleBar()
{
    m_titleBar = new MyTitleBar(this);
    m_titleBar->move(0,0);
}

BaseWindow::~basewindow()
{

}
