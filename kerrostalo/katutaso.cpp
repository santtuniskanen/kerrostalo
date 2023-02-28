
#include <iostream>
using namespace std;

#include "katutaso.h"
#include "asunto.h"

Katutaso::Katutaso() {
    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot(int a, int b) {
    cout << "Katutason asuntoja luotu 2kpl" << endl;
    as1.maarita(a, b);
    as2.maarita(a, b);
}

double Katutaso::laskeKulutus(double hinta) {
    double kulutus = 0.0;
    kulutus += as1.asukasMaara * as1.neliot;
    kulutus += as2.asukasMaara * as2.neliot;
    kulutus *= hinta;
    return kulutus;
}

double Katutaso::laskeKokonaiskulutus(double s) {
    double kulutus = Kerros::laskeKokonaiskulutus(s);
    kulutus += as1.asukasMaara * as1.neliot + as2.asukasMaara * as2.neliot;
    cout << "Kerroksen ja katutason asuntojen kulutus " << kulutus << endl;
    return kulutus;
}
