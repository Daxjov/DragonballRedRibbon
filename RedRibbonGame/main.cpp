#include "mainwindow.h"

#include <QApplication>
#include <QtGlobal>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    srand(12345);
    w.show();
    return a.exec();
}
