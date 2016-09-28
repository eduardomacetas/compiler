#include "lexer.h"

lexer::lexer(){
}

lexer::lexer(string source_code){
    tokenizer(source_code);
}


void  lexer::tokenizer(string cad){
    int cont=0,i=0,n=0;
    string subcad;
    string cc="";
    for(auto c:cad){
        ++cont;
        ++n;
        if( c==' ' || st.is(cc+c) ){
            if(c==' '){
                subcad = cad.substr(i,n-1);
                if( !is_null_token(subcad) ){
                    buffer_tokens.push_back( st.get_token(subcad) );
                }
                i=cont;
                n=0;
            }
            else{
                subcad = cad.substr(i,n-1);
                if( !is_null_token(subcad) ){
                    buffer_tokens.push_back( st.get_token(subcad) );
                }
                i=cont-1;

                subcad = cad.substr(i,1);
                if( !is_null_token(subcad) ){
                    buffer_tokens.push_back( st.get_token(subcad) );
                }
                i=cont;
                n=0;
            }
        }
    }
}

/*
 *intput: string
 * verifica si es un string vacio ( "" )
 * 1 vacio
 * 0 no vacio
 */
bool lexer::is_null_token(string token){
    if( token == ""){
        return true;
    }
    return false;
}


void lexer::print_buffer_tokens(){
    for(auto i:buffer_tokens){
        cout<<"|"<<i<<"|"<<endl;
    }
}

vector<string> lexer::get_buffer_tokens(){
    return buffer_tokens;
}

