#include "lexer.h"

lexer::lexer(){
}







void  lexer::tokenizer(string cad){
    cout<<cad<<"\n"<<endl;
    int cont=0,i=0,n=0;
    string subcad;
    for(auto c:cad){
        ++cont;
        ++n;
        if(c==' '){
            subcad = cad.substr(i,n);
            cout<<"|"<<subcad<<"|"<<endl;
            i=cont+1;
            n=0;
        }/*
        if(c=='(' || c==')' || c=='{' || c=='}' || c=='[' || c==']' || c==';' || c=='='){
            subcad = cad.substr(i,n-1);
            cout<<"|"<<subcad<<"|"<<endl;
            i=cont;
            n=1;
            subcad = cad.substr(i+1,1);
            cout<<"|"<<subcad<<"|"<<endl;
            i=cont;
            n=0;
        }*/

    }
    subcad = cad.substr(i,n);
    cout<<"|"<<subcad<<"|"<<endl;
}
