#ifndef SYMBOLS_TABLE_H
#define SYMBOLS_TABLE_H

#include<unordered_map>
#include <fstream>
#include <string>
#include <iostream>


using namespace std;
typedef unordered_map<string,string> my_hash;

class symbols_table
{

private:
    my_hash * table;
    string file_name;
private:
    bool entero( string cadena );
    bool is_identifier( string cadena);
    string evaluar( string cadena );

public:
    symbols_table();
    void read();
    void print_table();
    my_hash* get_table();
    string get_token(string p);
    bool is(string p);
};

#endif // SYMBOLS_TABLE_H
