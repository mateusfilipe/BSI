#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "funcionario.h"
struct Lista{
    Funcionario *primeiro;
    bool vazia();
    void inicializar();
    void inserirAoFinal(Funcionario *f);
    void inserirAoInicio(Funcionario *f);
    Funcionario* pesquisar(int v);
    bool removerInicio();
    bool removerFinal();
    void imprimir();
};
#endif // LISTA_H_INCLUDED
