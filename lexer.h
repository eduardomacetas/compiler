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
#include "symbols_table.h"
using namespace std;

class lexer{
    private:

        vector<string> buffer_tokens;
    public:
        lexer();
        void  tokenizer(string cad);
















};

#endif // LEXER_H
