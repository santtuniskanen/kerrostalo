#include <iostream>
#include "kerrostalo.h"
using namespace std;

Kerrostalo::Kerrostalo() {
    cout << "Kerrostalo luotu" << endl;
    first.maaritaAsunnot(2, 100);
    toka.maaritaAsunnot(2, 100);
    kolmas.maaritaAsunnot(2, 100);
}

double Kerrostalo::laskeKulutus(double s) {
    first.laskeKulutus(s);
    toka.laskeKulutus(s);
    kolmas.laskeKulutus(s);
    return 0;
}
