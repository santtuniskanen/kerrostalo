#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"

class Kerros {
public:
    Kerros();
    Asunto as1, as2, as3, as4;
    virtual void maaritaAsunnot(int, int);
    virtual double laskeKulutus(double);
    virtual double laskeKokonaiskulutus(double);
};

#endif // KERROS_H
