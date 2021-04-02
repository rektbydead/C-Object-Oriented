#include "Territorio.h"

char* territorio_getNome(Territorio* terr) {
    return terr->nome;
}

int territorio_getProduto(Territorio* terr, int turno) {
    return -1;
}

int territorio_getOuro(Territorio* terr, int turno) {
    return -1;
}

int territorio_getTempoConquistado(Territorio* terr) {
    return terr->tempoConquistado;
}

int territorio_getResistencia(Territorio* terr) {
    return terr->resistencia;
}

int getOuro(Territorio* terr) {
    return terr->Ouro;
}

int getProduto(Territorio* terr) {
    return terr->Produto;
}

Territorio* territorioConstrutor(Territorio* terr, int resistencia, char nome[25]) {
    terr->nome = nome;
    terr->tempoConquistado = 1;
    terr->resistencia = resistencia;
    terr->Ouro = 0;
    terr->Produto = 0;
    
    terr->getOuro = getOuro;
    terr->getProduto = getProduto;
    terr->getNome = territorio_getNome;
    terr->getResistencia = territorio_getResistencia;
    terr->getProdOuro = territorio_getOuro;
    terr->getProdProduto = territorio_getProduto;
    terr->getTempoConquistado = territorio_getTempoConquistado;
}