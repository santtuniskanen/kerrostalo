#ifndef KATUTASO_H
#define KATUTASO_H

#include "kerros.h"

class Katutaso : public Kerros {
public:
    Katutaso();
    Asunto as1, as2;
    virtual void maaritaAsunnot(void) override;
    double laskeKulutus(double);

};

#endif // KATUTASO_H
