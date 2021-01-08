#include "Person.h"
#include<iostream>
#include<cstring>
using namespace std;

Person::Person(const char *s){
    name = new char[::strlen(s) + 1];
    ::strcpy(name, s);
}

Person::Person(const Person& w){
    name = new char[::strlen(w.name) + 1];
    ::strcpy(name, w.name);
}
Person::~Person(){
    delete [] name;
}