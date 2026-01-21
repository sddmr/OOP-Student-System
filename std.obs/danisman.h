//
// Created by Selo on 21.01.2026.
//

#ifndef DANISMAN_H
#define DANISMAN_H
#include <string>


using namespace std;



class Danisman {
    private:
    string name;
    string surname;
    string unvan;

    public:
    Danisman(string name, string surname, string unvan): name(name), surname(surname), unvan(unvan) {}

    string getName() const;
    string getSurname() const;
    string getUnvan() const;

    void setName(string name);
    void setSurname(string surname);
    void setUnvan(string unvan);
    void bilgileriYazdir()const;


};



#endif //DANISMAN_H
