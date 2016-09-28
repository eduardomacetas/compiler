#ifndef COMPILER_H
#define COMPILER_H

#include "lexer.h"

class compiler{
    private:
        lexer _lexer; /* contiene el bufer de tokens  */
        //parser ..etc

    private:
        string source_code;

    public:
        compiler(string code);
        string get_source_code();

    public: /* functions utilities */
        //print .. etc


};

#endif // COMPILER_H
