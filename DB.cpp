#include <string>
#include <iostream>
#include "DB.h"
#include "person.cpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

DB::DB():Stock( usr ->getPersonName())
{
    cout << "O estoque não será armazenado em um banco de dados";
}

DB::DB(int DBType):Stock( usr -> getPersonName() , usr -> getPersonAge())//:Stock("", 0)
{   
}

DB::DB( const DB & other ):Stock("")//:Stock("")
{
    this -> DBType = other.DBType;
}

DB::~DB(){}

int DB::chooseDB(int DBType){
    int before = DBType;
    string w = "";

    if (DBType == 0){
        w = "relacional";
        cout << "O banco de dados a ser usado para armazenar o estoque será do tipo " << w;
        return 0;

    }
    else if(DBType == 1){
        w = "não-relacional";
        cout << "O banco de dados a ser usado para armazenar o estoque será do tipo " << w;
        return 1;
    }
    else{
        while ( DBType < 0 && DBType > 1 )
        {
            cout << "Por favor escolha segundo as seguintes opções: "<< "\n"
            << "BD relacional - 0"
            << "BD não-relacional - 1";

            cin >> DBType;

        }
        if (DBType == 0){
            w = "relacional";
            return 0;
        }
        else if(DBType == 1){
            w = "não-relacional";
            return 1;
        } 
    }
    
}

void DB::operator != (int DBType){
    this -> DBType = DBType;

}