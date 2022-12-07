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
    Warehouse( );
    Warehouse( const string, int);
    Warehouse( const Warehouse& );
    virtual ~Warehouse();

    virtual void operator = ( int ) = 0;
    virtual void operator != ( int ) = 0;
    void setWareHouseName( const string );
    void setTemperature(int);
    void printInfo( const string );

    private:
    string wareHouseName;
    int temperature;
};

#endif