#include <iostream>
#include "ogrenci.h"
#include "arama.h"
#include "danisman.h"


using namespace std;


int main() {
    Danisman d1("İskender","Buyuk","Dr");
    Danisman d2("Mehmet","Karahanli","Doç");

    Ogrenci o1("Abdulhey","Çoban",3.5,"Mehmet Karahanli");
    Ogrenci o2("Polat","Alemdar",1.2,"İskender Büyük");
    Ogrenci o3("Memati","Baş",0.3,"İskender Büyük");

    Arama arama;
    arama.ogrenciEkle(o1);
    arama.ogrenciEkle(o2);
    arama.ogrenciEkle(o3);

    cout << "=== Tum Ogrenciler ===" << endl;
    arama.tumOgrencileriListele();

    cout << "\n=== Ada Gore Arama: Ali ===" << endl;
    arama.adaGoreAra("Ali");

    cout << "\n=== Soyada Gore Arama: Yilmaz ===" << endl;
    arama.soyadaGoreAra("Yilmaz");

    cout << "\n=== GANO Araligina Gore Arama (3.00 - 4.00) ===" << endl;
    arama.ganoAraliginaGoreAra(3.0,4.00);


    return 0;
}
