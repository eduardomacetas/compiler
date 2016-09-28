/*
 * clase principal q administra analisis y sintesis
 * la clase 'main' interaccionan solo con esta clase
 * ...
 *
*/
#include "compiler.h"



/*
 * compilacion
 * paso 1 lexer
 * paso 2 ..
 * paso 3 ..
*/
compiler::compiler(string code){
    source_code=code;
    _lexer.tokenizer(source_code);
    _lexer.print_buffer_tokens();/* solo para ver resultados ... */
}

string compiler::get_source_code(){
    return source_code;
}

