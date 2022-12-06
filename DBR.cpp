#include <iostream>
#include <string.h>
#include "DBR.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

Stock *trial;

DBR::DBR(){
    printTable(key = "\' \'");
}

DBR::DBR( string key ){
    printTable(key);
}

DBR::DBR(const DBR& other){
    this -> key = other.key;
}

DBR::~DBR(){}

void DBR::printTable(string key){
  cout << "______" << "\n"
    << "|"<< key <<"|" << "\n"
    << "______" << "\n";

    for(int i = 0; i < trial -> getListSize(); i++){
        cout << "______" << "\n"
        << "|" << trial -> getContentListItem(i) << "|" << "\n"
        << "______" << "\n";
    }   
};

string DBR::operator != (string key){
    this -> key = key;
}