#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include "stock.h"
#include <string>
#include <iostream>

using std::cout;
using std::string;

class Warehouse : public Stock
{
    public:
    Warehouse();
    Warehouse( int );
    Warehouse( const Warehouse& );
    ~Warehouse();

    void operator = ( int );
    void operator != ( int );

    private:

    int types;
};

#endif