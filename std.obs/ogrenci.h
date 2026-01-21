#ifndef OGRENCI_H
#define OGRENCI_H
#include <string>
using namespace std;

class Ogrenci {
    string name;
    string surname;
    double gano;
    string advisor;

public:

    Ogrenci(string name, string surname, double gano, string advisor) : name(name),surname(surname),gano(gano),advisor(advisor){}

    string getName() const;

    string getSurname() const;

    double getGano() const;

    string getAdvisor() const;

    void setName(string name);

    void setSurname(string surname);

    void setGano(double gano);

    void setAdvisor(string advisor);

    void yazdir() const;


};


#endif //OGRENCI_H
