#include "mainwindow.h"
#include <QApplication>
#include<login.h>
#include<smtp.h>
#include<userregister.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //MainWindow w;
    //w.show();
    login l;
    l.show();


    return a.exec();
}
