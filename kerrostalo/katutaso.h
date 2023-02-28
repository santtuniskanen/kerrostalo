#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto.h"
#include "kerros.h"

class Katutaso : public Kerros {
public:
    Katutaso();
    Asunto as1, as2;
    void maaritaAsunnot(int, int);
    double laskeKulutus(double);
    double laskeKokonaiskulutus(double);
};

#endif // KATUTASO_H
