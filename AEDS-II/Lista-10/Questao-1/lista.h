#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "tripulante.h"

#include <stdio.h>

using namespace std;

struct Lista{
    Tripulante* primeiro;
    bool vazia();
    void inicializar();
    void inserirAoFinal(int c, string n, int i);
    void inserirAoInicio(int c, string n, int i);
    Tripulante* pesquisar(int v);
    bool removerInicio();
    bool removerFinal();
    void imprimir();
};


#endif // LISTA_H_INCLUDED
