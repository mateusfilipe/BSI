#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#include "celula.h"

struct Fila{
    Celula* primeiro;
    Celula* ultimo;
    int quantidade;

    bool vazia();
    void inicializar();
    void inserir(int ide, float tempoe);
    bool remover();
    void esvaziar();
    void imprimir();
};

#endif // FILA_H_INCLUDED
