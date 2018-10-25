#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#include "bloco.h"

struct Pilha{
    Bloco *topo;
    int quantidade;

    bool vazia();
    void inicializar();
    void empilhar(int elemento);
    bool desempilhar();
    void esvaziar();
    void imprimir();
};


#endif // PILHA_H_INCLUDED
