#include "Montanha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int nTerrTipo = 0;
static const char* terrName = "Montanha";

int montanha_getProdOuro(Territorio* terr, int turno) {
    return 3;
}

int montanha_getProdProduto(Territorio* terr, int turno) {
    return 4;
}

Montanha* new_Montanha() {
    Montanha* montanha = malloc(sizeof(Montanha));
    if (montanha == NULL)
        return NULL;

    char *nome = malloc(25 * sizeof(char));
    snprintf(nome, 25, "%s%d", terrName, ++nTerrTipo);

    Territorio* terr = territorioConstrutor((Territorio*)montanha, 6, nome);
    montanha->getNome = terr->getNome;
    montanha->getResistencia = terr->getResistencia;
    montanha->getTempoConquistado = terr->getTempoConquistado;
    montanha->getOuro = terr->getOuro;
    montanha->getProduto = terr->getProduto;
    montanha->getProdOuro = terr->getProdOuro = montanha_getProdOuro;
    montanha->getProdProduto = terr->getProdProduto = montanha_getProdProduto;

    return montanha;
}