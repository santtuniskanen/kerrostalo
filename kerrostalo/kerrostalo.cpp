#include <iostream>
#include "kerrostalo.h"
using namespace std;

Kerrostalo::Kerrostalo() {
    cout << "Kerrostalo luotu" << endl;
    first.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta) {
    double katutasonKulutus = first.laskeKulutus(hinta);
    double kerrostenKulutus = toka.laskeKulutus(hinta) + kolmas.laskeKulutus(hinta);
    return katutasonKulutus+kerrostenKulutus;

}
