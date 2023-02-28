
#include <iostream>
using namespace std;

#include "katutaso.h"
#include "asunto.h"

Katutaso::Katutaso() {
    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot() {
    cout << "Katutason asuntoja luotu 2kpl" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    this->Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta) {
    return as1.laskeKulutus(hinta)+as2.laskeKulutus(hinta)
            +Kerros::laskeKulutus(hinta);
}

