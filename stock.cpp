#include "stock.h"
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//int Stock::listSize = 0;
//int Stock::contentNameSize = 0;

Stock::Stock(){
}

Stock::Stock(const string categoryName){
  Stock *ptr;
  *ptr = categoryName; 
}
Stock::Stock(const Stock &other) { 
}
Stock::~Stock(){}

string Stock::getStockName() { 
  return category.nameOfCategory;   
}

void Stock::operator << (string contentName){
 /* while (contentName.size() > contentNameSize) {
    cout << "Escolha um nome para o conteudo com comprimento menor que: "
         << contentNameSize << "\n";
    cin >> contentName;
  }
  if (contentList.size() == listSize) {
    string qs = "";
    int newListSize = 0;
    *listPtr = listSize;
    cout << "o estoque está cheio, não é possível por mais conteúdo"
         << "/n"
         << "Deseja aumentar o tamanho para um compartimento maior?Digite S para Sim e N para Não";
    cin >> qs;
    if (qs == "S"){
      while( newListSize <= *listPtr ){
        cout << "Digite um tamanho maior que: " << *listPtr;
        cin >> newListSize;
      }
      listSize == newListSize;
    }
      cout << "O conteudo de " 
      << contentName << " não será inserido";
      return;
  }*/
  contentList.push_back(contentName);
}

void Stock::printContentList() {
  cout << "Conteúdo do estoque:" << "\n";
  for (int i = 0; i < contentList.size(); i++) {
    cout << contentList[i] << "\n";
  }
}

string Stock::getContentListItem(int position){
  return contentList[position];
}
/*
void Stock::setContentNameSize(int contentNameSize) {
  this -> contentNameSize = contentNameSize;
}

void Stock::setListSize(int listSize){
  this -> listSize = listSize;
}
*/
/*
int Stock::getListSize(){
  return listSize;
} */
/*
void Stock::operator == (int listSize) {
  this -> listSize = listSize;
}*/


void Stock::operator = ( string categoryName ){
  while (categoryName.size() < 3) {
    cout << "Escolha um nome com comprimento maior que 3"
         << "\n";
    cin >> categoryName;
  }
  
  this -> category.nameOfCategory = categoryName;
  cout << "O estoque pertence à categoria " << categoryName << "\n";
}

