#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "aluno.h"
struct Lista
{
    Aluno* primeiro;
    bool vazia();
    void inicializar();
    void inserirAoFinal(Aluno *a);
    void inserirAoInicio(Aluno *a);
    Aluno* pesquisar(int v);
    Aluno* removerBusca(int v);
    bool removerInicio();
    bool removerFinal();
    void imprimir();
    float media(Aluno *a);
};

#endif // LISTA_H_INCLUDED
