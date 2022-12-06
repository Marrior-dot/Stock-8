#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using std::cout;
using std::string;

class Person{

    public:
    Person( const string, int);
    Person( const string);
    Person( const Person&);
    ~Person();

    void print(string, int = 0);
    string getPersonName();
    int getPersonAge();

    private:
    string name;
    int age;
};
#endif