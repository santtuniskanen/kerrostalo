#include <iostream>
#include "asunto.h"
using namespace std;

Asunto::Asunto() {
    cout << "Asunto luotu" << endl;

}

void Asunto::maarita(int a, int b) {
    asukasMaara = a;
    neliot = b;
    cout << "Asunto maaritetty asukkaita = " << asukasMaara <<
            ", nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta) {
return asukasMaara*neliot*hinta;
}
