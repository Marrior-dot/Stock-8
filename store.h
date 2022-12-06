#ifndef STORE_H
#define STORE_H

#include "date.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;

class Store{

    public:
    Store( );
    Store( const string, const string );
    Store( const Store& );
    ~Store( );

    void requestStock( const string, const string );
    string getStoreName();
   
    private:
    string storeName;
    string stock;
};

#endif