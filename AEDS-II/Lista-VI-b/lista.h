#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "cliente.h"
struct Lista{
    Cliente *cabeca;
    bool vazia();
    void inicializar();
    void inserirAoFinal(Cliente *c);
    void inserirAoInicio(Cliente *c);
    Cliente *pesquisar(int v);
    bool removerInicio();
    bool removerFinal();
    void imprimir();
    void acrescente();
    void conta();
};


#endif // LISTA_H_INCLUDED
