#include <iostream>
#include "ogrenci.h"

using namespace std;

string Ogrenci::getName() const {
    return name;
}
string Ogrenci::getSurname() const{
    return surname;
}
double Ogrenci::getGano() const{
    return gano;
}
string Ogrenci::getAdvisor() const{
    return advisor;
}

void Ogrenci::setName(const string name) {
    this->name = name;
}
void Ogrenci::setSurname(const string surname) {
    this->surname = surname;
}
void Ogrenci::setGano(const double gano) {
    this->gano = gano;
}
void Ogrenci::setAdvisor(const string advisor) {
    this->advisor = advisor;
}

void Ogrenci::yazdir() const {
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Gano: " << gano << endl;
    cout << "Advisor: " << advisor << endl;
    cout<<"==="<<endl;

}

