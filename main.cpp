#include "mainwindow.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    Pylon::PylonAutoInitTerm autoInitTerm;

    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    w.init();
    return a.exec();
}
