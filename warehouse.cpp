#include <string>
#include <iostream>
#include "warehouse.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

Warehouse::Warehouse():Stock(){
    cout << "O estoque não será armazenado em um armazém";
}
Warehouse::Warehouse(const string categoryName, int temperature):Stock(categoryName){
    setTemperature(temperature);
    printInfo(categoryName);
}

Warehouse::Warehouse(const Warehouse &other):Stock(other){
    int decision1;
    int decision2;
    int newTemperature;
    string newWareHouseName;
    cout << "Deseja mudar a temperatura? " << "\n"
    << "0: Não" << "\n" << "1: Sim" << "\n";
    cin >> decision1;

    while(decision1 < 0 || decision1 > 1){ 
        cout << "Por favor escolha entre 0 e 1 " << "\n"
        << "0: Não" << "\n" << "1: Sim" << "\n";  
        cin >> decision1;
    }

    if( decision1 == 1){
        cout << "Escolha um novo valor para a temperatura: " << "\n";
        cin >> newTemperature;
        setTemperature(newTemperature);
    }
    else{
        cout << "A temperatura do Armazém é " << this -> temperature;
    }

    cout << "Deseja mudar o nome do Armazém? " << "\n"
    << "0: Não" << "\n" << "1: Sim" << "\n";
    cin >> decision2;

    while(decision2 < 0 || decision2 > 1){ 
        cout << "Por favor escolha entre 0 e 1 " << "\n"
        << "0: Não" << "\n" << "1: Sim" << "\n";  
        cin >> decision2;
    }

    if(decision2 == 1){
        cout << "Escolha um novo nome para o Armazém" << "\n";
        cin >> newWareHouseName;
        setWareHouseName(newWareHouseName);
    }
    else{
        cout << "O nome do Armazém é: " << this -> wareHouseName;
    }

}
Warehouse::~Warehouse(){}

void Warehouse::setWareHouseName( const string wareHouseName ){
    this -> wareHouseName = wareHouseName;
}

void Warehouse::setTemperature(int temperature){
    if( temperature < 15 ){
        cout << "Armazém de temperatura fria";
    }
    else if( temperature > 30 ){
        cout << "Armazém de temperatura quente";
    }
    else{
        cout << "Armazém de temperatura normal";
    }
    this -> temperature = temperature;
}

void Warehouse::printInfo( const string category ){
    cout << "Categoria: " << category << "\n"
    << "Nome: " <<  wareHouseName << "\n"
    << "Temperatura em Celsius: " << temperature;
}

/*
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
*/