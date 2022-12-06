#include <string>
#include <iostream>
#include "DBNR.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

Stock *trialNR;

DBNR::DBNR( string key )
{
    cout << "Dado será guardado sem formatação";
}

DBNR::DBNR( string key, int textType)
{
    print(dataFormat(textType));
}

DBNR::DBNR( const DBNR & other)
{
    this -> key = other.key;
    this -> textType = other.textType;
    print(dataFormat(textType));
}
DBNR::~DBNR(){}

string DBNR::dataFormat(int textType){
    while ( textType < 0 && textType > 3){
        cout << "Escolha uma alternativa válida" << "\n"
        << "0 - XML" << "\n"
        << "1 - YAML" << "\n"
        << "2 - JSON" << "\n";        
    }
    if(textType == 0){
        return "XML";
    }
    else if(textType == 1){
        return "YAML";
    }
    else if(textType == 2){
        return "JSON";
    }
}

void DBNR::print( string dataFormat ){
    string arrayTag[trialNR -> getListSize()];
    string tag = "";

    if (dataFormat == "XML"){    
        cout << "Formato XML:" << "\n";
        cout << "<DATA>"<<"\n"
        << "\t" << "<KEY> </KEY>" << "\n"
        <<"\t" << "..." <<"\n"
        <<"\t" << "</DATA>";

        for (int i = 0; i < trialNR -> getListSize(); i++)
        {   
            
            cout << "Escolha o nome da tag para o dado: "<< trialNR -> getContentListItem(i) << "\n";
            cin >> tag;
            arrayTag[i] = tag;
        }
        cout << "<" << key << ">" << "\n";
        for ( int z = 0; z < trialNR -> getListSize() ; z++ ) 
        {
            cout << "\t" << "<" << arrayTag[z] << ">" << trialNR -> getContentListItem(z) << "</" << arrayTag[z] << ">";
        }
        
        cout << "\t" <<  "</" << key << ">" << "\n";
    }

    else if(dataFormat == "YAML"){
        cout << "Formato YAML:" << "\n";
        cout << "data:" << "\n"
        << "\t" << "item: valor" << "\n"
        << "\t" << "item1: valor1" << "\n"
        << "\t" << "item2: valor2" << "\n"
        << "\t" << "itemN: valorN" << "\n"
        << "\t" << "..." << "\n";

        for (int i = 0; i < trialNR->getListSize(); i++)
        {   
            cout << "Escolha o nome da tag para o dado: "<< trialNR -> getContentListItem(i) << "\n";
            cin >> tag;
            arrayTag[i] = tag;
        }

        cout << key << ":" << "\n";
        for ( int z = 0; z < trialNR -> getListSize() ; z++ ) 
        {
            cout << "\t"<< arrayTag[z] << ":" << trialNR -> getContentListItem(z) << "\n";
        }
    }

    else if(dataFormat == "JSON"){
        cout << "Formato JSON:" << "\n";
        cout << "{" << "\n" 
        << "data{" << "\n"
        << "\t" << "item: valor," << "\n"
        << "\t" << "item1: valor1," << "\n"
        << "\t" << "item2: valor2," << "\n"
        << "\t" << "itemN: valorN," << "\n"
        << "\t" << "..." << "\n"
        << "}" << "\n";

        for (int i = 0; i < trialNR->getListSize(); i++)
        {   
            cout << "Escolha o nome da tag para o dado: "<< trialNR -> getContentListItem(i) << "\n";
            cin >> tag;
            arrayTag[i] = tag;
        }

        cout << "{" << "\n";
        cout << key << "{" << "\n";
        for ( int z = 0; z < trialNR -> getListSize() ; z++ ) 
        {
            cout << "\t"<< arrayTag[z] << ":" << trialNR -> getContentListItem(z) << "," << "\n";
        }
        cout << "}";
    }
}


