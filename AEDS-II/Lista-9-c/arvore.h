#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED
#include <stdio.h>
#include "No.h"

using namespace std;

struct Arvore{
    No* raiz;
    void inicializar();
    void inserir(int valor, string Nome);
    No* inserirNovo(No* novo, No* raiz_atual);
    No* encontrarElementoPai(No* atual, int valor);
    No* encontrarMenorElementoEsquerda(No* atual_direita);
    bool remover(int valor, string nome);
    void preordem(No* elemento);
    void emordem(No* elemento);
    void posordem(No* elemento);
};


#endif // ARVORE_H_INCLUDED
