#include <string>
#include <iostream>
#include "warehouse.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

Warehouse::Warehouse():Stock(""){
    cout << "O estoque não será armazenado em um armazém";
}
Warehouse::Warehouse(int type):Stock(""){
}
Warehouse::Warehouse(const Warehouse &other):Stock(""){
    this -> types = other.types;
}
Warehouse::~Warehouse(){}

void Warehouse::operator=( int type ){
    string w = "";
    if (type == 0){
        w = "Público"; 
    }
    else if (type == 1){
        w = "Próprio"; 
    }
    else if (type == 2){
        w = "Temporário"; 
    }
    else if (type == 3){
        w = "Permanente"; 
    }
    else{
        while( type < 0 && type > 3){
            cout << "Por favor Escolha um valor válido segundo as seguintes escolhas" << "\n";
            cout << "Público - 0" << "\n";
            cout << "Próprio - 1" << "\n";
            cout << "Temporário- 2" << "\n";
            cout << "Permanente - 3" << "\n";
            
            cin >> w;
            
        }
        if (type == 0){
            w = "Público"; 
        }
        else if (type == 1){
            w = "Próprio"; 
        }
        else if (type == 2){
            w = "Temporário"; 
        }
        else if (type == 3){
            w = "Permanente"; 
        }
    }
    cout << "O tipo de armazém escolhido foi " << w << "\n";
}

void Warehouse::operator!=( int type ){
    string w = "";
    int anteriorType = type;
    if (type == 0){
        w = "Público"; 
    }
    else if (type == 1){
        w = "Próprio"; 
    }
    else if (type == 2){
        w = "Temporário"; 
    }
    else if (type == 3){
        w = "Permanente"; 
    }
    else{
        while( type < 0 && type > 3){
            cout << "Por favor Escolha um valor válido segundo as seguintes escolhas" << "\n";
            cout << "Público - 0" << "\n";
            cout << "Próprio - 1" << "\n";
            cout << "Temporário- 2" << "\n";
            cout << "Permanente - 3" << "\n";
            
            cin >> w;
        }
    }

    if ( type == anteriorType ){
        while( (type < 0 && type > 3) && type == anteriorType ){
            cout << "Por favor escolha um valor diferente de "<< anteriorType << "\n";
            if(anteriorType != 0){
                cout << "Público - 0" << "\n";
            }
            if(anteriorType != 1){
                cout << "Próprio - 1" << "\n";
            }
             if(anteriorType != 2){
                cout << "Temporário - 2" << "\n";
            }
             if(anteriorType != 3){
                cout << "Permanente - 3" << "\n";
            }
            cin >> w;
        }
    }
    cout << "O novo tipo de armazém escolhido foi " << w << "\n";
}