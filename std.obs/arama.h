//
// Created by Selo on 21.01.2026.
//

#ifndef ARAMA_H
#define ARAMA_H
#include "ogrenci.h"
#include <vector>
using namespace std;



class Arama {
private:
    vector<Ogrenci> ogrenciler;
public:
    void ogrenciEkle(const Ogrenci& ogrenci);

    void adaGoreAra(const string& ad) const;
    void soyadaGoreAra(const string& soyad) const;
    void ganoAraliginaGoreAra(double min, double max) const;

    void tumOgrencileriListele() const;

};



#endif //ARAMA_H
