/*
	clase main
*/

#include "mainwindow.h"
#include <QApplication>
#include <istream>
//#include "symbols_table.h"
//#include "lexer.h"
#include "compiler.h"
using namespace std;



void main_yonel(){
    string cad = "int y=10; int main(){return 0;}";
    cout<<"cadena:  ||"<<cad<<"||"<<endl;

    compiler _compiler(cad);


}




int main(int argc, char *argv[])
{
    //main_yonel();


    //---interfaz
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
