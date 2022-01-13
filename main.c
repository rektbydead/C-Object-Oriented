#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Montanha.h"
#include "Planicie.h"

#define boolean int
#define true 1
#define false 0


void main(int argc, char *argv) {
    int turno = 1;
    Territorio* m = (Territorio*) new_Montanha();
    printf("Ouro montanha: %d \n", m->getProdOuro((TTerritorio)m, turno));
    printf("Produto montanha: %d \n", m->getProdProduto((TTerritorio)m, turno));
    free(m);

    Territorio* p = (Territorio*) new_Planicie();
    printf("Ouro planicie: %d \n",p->getProdOuro((TTerritorio)p, turno));
    printf("Produto planicie: %d \n",p->getProdProduto((TTerritorio)p, turno));
    free(p);
}
