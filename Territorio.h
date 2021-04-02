#ifndef TERRITORIO_H
#define TERRITORIO_H

typedef struct Territorio Territorio, *TTerritorio;
struct Territorio {
    char* nome;
    int   resistencia;
    int   Produto, Ouro, tempoConquistado;
    
    char* (*getNome)(Territorio* terr);
    int   (*getProduto)(Territorio* terr);
    int   (*getOuro)(Territorio* terr);
    int   (*getProdProduto)(Territorio* terr, int turno);
    int   (*getProdOuro)(Territorio* terr, int turno);
    int   (*getTempoConquistado)(Territorio* terr);
    int   (*getResistencia)(Territorio* terr); 
};

Territorio* territorioConstrutor(Territorio* terr, int resistencia, char* nome);
 
#endif