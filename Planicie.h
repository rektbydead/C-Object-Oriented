#ifndef PLANICIE_H
#define PLANICIE_H

#include "Territorio.h"

typedef struct Planicie Planicie;
struct Planicie {
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

Planicie* new_Planicie();

#endif