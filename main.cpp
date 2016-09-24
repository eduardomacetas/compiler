/*
	clase main
*/

#include "mainwindow.h"
#include <QApplication>
#include "symbols_table.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    symbols_table * tb= new symbols_table();
    tb->read();
    tb->print_table();
    MainWindow w;
    w.show();
    return a.exec();
}
