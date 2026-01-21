//
// Created by Selo on 21.01.2026.
//
#include "danisman.h"

#include <iostream>
#include <__ostream/basic_ostream.h>

#include "ogrenci.h"


using namespace std;

string Danisman::getName() const {
    return name;
}
string Danisman::getSurname() const {
    return surname;
}
string Danisman::getUnvan() const {
    return unvan;
}

void Danisman::setName(string name) {
    this->name = name;
}
void Danisman::setSurname(string surname) {
    this->surname = surname;
}
void Danisman::setUnvan(string unvan) {
    this->unvan = unvan;
}

void Danisman::bilgileriYazdir() const {
    cout<<"Ad"<<Danisman::name<<endl;
    cout<<"Soyad"<<Danisman::surname<<endl;
    cout<<"Unvan"<<Danisman::unvan<<endl;
}


