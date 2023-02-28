#include <iostream>
#include "kerros.h"

using namespace std;

Kerros::Kerros() {
    cout << "Kerros luotu" << endl;
}

void Kerros::maaritaAsunnot(int a, int b) {
    cout << "Maaritetaan 4kpl kerroksen asuntoja" << endl;
    as1.maarita(a, b);
    as2.maarita(a, b);
    as3.maarita(a, b);
    as4.maarita(a, b);
}

double Kerros::laskeKulutus(double s){
    double total_kulutus = as1.asukasMaara * as1.neliot +
                           as2.asukasMaara * as2.neliot +
                           as3.asukasMaara * as3.neliot +
                           as4.asukasMaara * as4.neliot;
        double kulutus = s * total_kulutus;
        cout << "Kerroksen asuntojen kulutus, kun hinta = " << s <<
             " on " << kulutus <<endl;
    return kulutus;
}

double Kerros::laskeKokonaiskulutus(double s) {
    double total_kulutus = as1.asukasMaara * as1.neliot +
                           as2.asukasMaara * as2.neliot +
                           as3.asukasMaara * as3.neliot +
                           as4.asukasMaara * as4.neliot;
    double kulutus = s * total_kulutus;
    cout << "Kerroksen asuntojen kulutus, kun hinta = " << s <<
             " on " << kulutus <<endl;
    return kulutus;
}

