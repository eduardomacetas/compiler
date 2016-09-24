#include "lexer.h"

lexer::lexer(){
}

void  lexer::fn(string cad){
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
            }
            i=cont;
            n=0;
        }
    }
    cout<<"|"<<cad.substr(i,n)<<"|"<<endl;
}
