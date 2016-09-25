/*
	clase main
*/

#include "mainwindow.h"
#include <QApplication>
#include <istream>
#include "symbols_table.h"
#include "lexer.h"
using namespace std;



void main_yonel(){
    cout<<"-------------"<<endl;

    lexer lx;
    //lx.tokenizer("int main(){return 0;}");
    lx.tokenizer("uno dos tres");


    cout<<"-------------"<<endl;
}




int main(int argc, char *argv[])
{
    main_yonel();


    //interfaz
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    //return a.exec();
}
