//
// Created by Selo on 21.01.2026.
//

#include "arama.h"
#include <iostream>
using namespace std;

void Arama::ogrenciEkle(const Ogrenci &ogrenci) {
    ogrenciler.push_back(ogrenci);
}
void Arama::adaGoreAra(const string& ad) const {
    for (const Ogrenci& ogrenci : ogrenciler) {
        if (ogrenci.getName() == ad) {
            ogrenci.yazdir();
        }
    }
}
void Arama::soyadaGoreAra(const string& soyad) const {
    for (const Ogrenci& ogrenci : ogrenciler) {
        if (ogrenci.getSurname() == soyad) {
            ogrenci.yazdir();
        }
    }
}
void Arama::ganoAraliginaGoreAra(double min, double max) const {
    for (const Ogrenci& ogrenci : ogrenciler) {
        if (ogrenci.getGano() >= min && ogrenci.getGano() <= max) {
            ogrenci.yazdir();
        }
    }
}
void Arama::tumOgrencileriListele() const {
    for (const Ogrenci& ogrenci : ogrenciler) {
        ogrenci.yazdir();
    }
}


