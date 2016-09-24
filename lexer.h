/*
    	lexer.h
     recursos:
     tabla de simboslos,
     automatas,

     se creara:
     funciones de tratamiento de string

     resultados:
     bufer de tokens XD

     ...
*/
#ifndef LEXER_H
#define LEXER_H

#include <vector>
#include <iostream>
using namespace std;

class lexer{
    private:
        vector<string> buffer_tokens;
    public:
        lexer();
        void  fn(string cad){
            cout<<cad<<"\n"<<endl;
            int cont=0,i=0,n=0;
            string subcad;
            for(auto c:cad){
                ++cont;
                ++n;
                if(c==' '){
                    subcad = cad.substr(i,n-1);
                    if( subcad!=" " ){
                        cout<<"|"<<subcad<<"|"<<endl;
                        cout<<"buscar token tux"<<endl;
                        buffer_tokens.push_back( "tipo" );
                        cout<<endl;
                    }
                    i=cont;
                    n=0;
                }
            }
            cout<<"|"<<cad.substr(i,n)<<"|"<<endl;
            cout<<"buscar token tux buscar_t_sim(cad.substr(i,n))"<<endl;
            buffer_tokens.push_back("tipo  buscar_t_sim(cad.substr(i,n))" );
        }

















};

#endif // LEXER_H
