#ifndef DB_H
#define DB_H
#include "stock.cpp"
#include <string>
#include <iostream>

using std::cout;
using std::string;

class DB : public Stock{
    public:
    DB();
    DB( int );
    DB( const DB& );
    ~DB();

    int chooseDB (int);
    void operator != ( int );

    private:
    int DBType;
    
};

#endif