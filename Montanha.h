#ifndef MONTANHA_H
#define MONTANHA_H

#include "Territorio.h"

typedef struct Montanha Montanha;
struct Montanha {
    Territorio base;

    char* (*getNome)(Territorio* terr);
    int   (*getProduto)(Territorio* terr);
    int   (*getOuro)(Territorio* terr);
    int   (*getProdProduto)(Territorio* terr, int turno);
    int   (*getProdOuro)(Territorio* terr, int turno);
    int   (*getTempoConquistado)(Territorio* terr);
    int   (*getResistencia)(Territorio* terr);
    void  (*Atualizar)(Territorio* terr, int turno);
};

Montanha* new_Montanha();

#endif