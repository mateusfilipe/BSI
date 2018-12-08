#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED
#include <stdio.h>
#include "No.h"

using namespace std;

struct Arvore{
    No* raiz;
    void inicializar();
    void inserir(int valor);
    No* inserirNovo(No* novo, No* raiz_atual);
    No* encontrarElementoPai(No* atual, int valor);
    No* encontrarMenorElementoEsquerda(No* atual_direita);
    No* encontrarElemento(No* atual, int valor);
    bool remover(int valor);
    bool rotacaoSE(int valor);
    bool rotacaoSD(int valor);
    bool rotacaoDE(int valor1, int valor2);
    bool rotacaoDD(int valor1, int valor2);
    void preordem(No* elemento);
    void emordem(No* elemento);
    void posordem(No* elemento);
};


#endif // ARVORE_H_INCLUDED
