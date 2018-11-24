#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED
#include <stdio.h>
#include "livro.h"

using namespace std;

struct Arvore{
    Livro* raiz;
    void inicializar();
    void inserir(int valor, string Livrome);
    Livro* inserirNovo(Livro* novo, Livro* raiz_atual);
    Livro* encontrarElementoPai(Livro* atual, int valor);
    bool remover(int valor);
    void preordem(Livro* elemento);
    void emordem(Livro* elemento);
    void posordem(Livro* elemento);
};


#endif // ARVORE_H_INCLUDED
