#include "Planicie.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int nTerrTipo = 0;
static const char* terrName = "Montanha";

int planicie_getProdOuro(Territorio* terr, int turno) {
    return 1;
}

int planicie_getProdProduto(Territorio* terr, int turno) {
    return 2;
}

Planicie* new_Planicie() {
    Planicie* planicie = malloc(sizeof(Planicie));
    if (planicie == NULL)
        return NULL;

    char *nome = malloc(25 * sizeof(char));
    snprintf(nome, 25, "%s%d", terrName, ++nTerrTipo);

    Territorio* terr = territorioConstrutor((Territorio*) planicie, 6, nome);
    planicie->getNome = terr->getNome;
    planicie->getResistencia = terr->getResistencia;
    planicie->getTempoConquistado = terr->getTempoConquistado;
    planicie->getOuro = terr->getOuro;
    planicie->getProduto = terr->getProduto;
    planicie->getProdOuro = terr->getProdOuro = planicie_getProdOuro;
    planicie->getProdProduto = terr->getProdProduto = planicie_getProdProduto;

    return planicie;
}
