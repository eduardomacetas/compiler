#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    string b = "peru";
    for(auto i:b)
    {
        cout<<i<<endl;
    }
    w.show();
    cout<<"hola Mica"<<endl;
    return a.exec();
}
