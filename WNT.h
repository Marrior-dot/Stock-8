#ifndef WNT_H
#define WNT_H

#include "warehouse.h"
#include <string>
#include <iostream>

class WNT: public Warehouse{
    public:
    WNT();
    WNT( int );
    WNT( const WNT& );
    ~WNT();

    void employeesNum( );
    void shelfType( int );
    void operator = ( int );
    void operator != ( int );

    private:
    int shelf;
    int employees;
};

#endif