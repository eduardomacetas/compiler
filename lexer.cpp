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
        if(c==' ' ||c=='(' || c==')' || c=='{' || c=='}' || c=='[' || c==']' || c==';' || c=='='){
            if(c!=' '){
                subcad = cad.substr(i,n);
                cout<<"|"<<subcad<<"|"<<endl;
                i=cont;
                n=0;
            }else{
                subcad = cad.substr(i,n);
                cout<<"|"<<subcad<<"|"<<endl;
                i=cont;
                n=0;
            }
        }
    }
}
