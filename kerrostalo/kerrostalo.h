#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "kerros.h"
#include "katutaso.h"

class Kerrostalo {
public:
    Kerrostalo();
    Katutaso first;
    Kerros toka;
    Kerros kolmas;
    double laskeKulutus(double);

};

#endif // KERROSTALO_H
