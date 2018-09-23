#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "registro.h"

struct Lista
{
    Registro* cabeca;
    bool vazia();
    void inicializar();
    void inserirAoFinal(Registro* c);
    void inserirAoInicio(Registro* c);
    Registro* pesquisar(int v);
    bool removerInicio();
    bool removerFinal();
    void imprimir();
};

#endif // LISTA_H_INCLUDED
