#include "basewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    basewindow w;
    w.show();

    return a.exec();
}
