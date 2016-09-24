#include "symbols_table.h"
#
symbols_table::symbols_table()
{
    table= new my_hash;
    file_name="../compiler/resources/symbols_table.txt";
}

/*
 * Carga los datos en memoria-> tabla hash
 */
void symbols_table::read()
{
    ifstream doc(file_name);
    if(!doc.is_open())
        cout<<"error al abrir el archivo"<<endl;
    string t,a,b;
    int i=0;
    getline(doc,t);
    getline(doc,t);

    while(!doc.eof())
    {
        doc>>a>>b;
        table->insert({a,b});
    }
}

void symbols_table::print_table()
{
    for (auto & x:*table)
        cout << x.first << ": " << x.second << endl;
    cout<< "total:"<<table->size()<<endl;
}
/*
 * permite obtener la tabla como un metodo
 */
my_hash* symbols_table::get_table()
{
    return table;
}

string symbols_table::get_token(string p)
{
    string rpta;
    auto it = table->find(p);
    if(it==table->end())
        rpta="token_unkwon";
    else
        rpta=it->second;
    return rpta;
}
