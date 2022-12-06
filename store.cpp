#include "store.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


Store::Store(  ){
    cout << "Esse esqtoque não foi requisitado por nenhuma loja";
}
Store::Store( const string storeName, const string stock ){
    requestStock(storeName, stock);
}
Store::Store( const Store & other){
    storeName = other.storeName;
    stock = other.stock;
    requestStock(storeName, stock);
}
Store::~Store(){}

void Store::requestStock( const string storeName, const string stock){
    cout << "A loja " << storeName <<"\n"
    << " requisitou o stock de categoria: " << stock;
}

string Store::getStoreName(){
    return storeName;
}
