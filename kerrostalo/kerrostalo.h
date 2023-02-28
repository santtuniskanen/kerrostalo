#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "kerros.h"
#include "katutaso.h"

class Kerrostalo {
public:
    Kerrostalo();
    double laskeKulutus(double);
private:
    Katutaso first;
    Kerros toka;
    Kerros kolmas;

};

#endif // KERROSTALO_H
