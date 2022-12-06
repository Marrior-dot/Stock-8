#include "person.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

Person::Person(const string name, int age){
    print(name, age);
}

Person::Person( const string name){
    print(name);
}

Person::Person( const Person & other){
     name = other.name;
     age = other.age;
     print(other.name, other.age);
}

void Person::print(string name, int age){

    if(age == 0){
        cout << "O nome do dono do estoque é: "
    <<  name << "\n"
    << "idade: "<< "não identificado" << "\n";
    }
    else{
    cout << "O nome do dono do estoque é: "
    <<  name << "\n"
    << "idade: "<< age
    <<"\n";
    }
}

string Person::getPersonName(){
    return name;
}

int Person::getPersonAge(){
    return age;
}