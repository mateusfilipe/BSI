#include <iostream>
#include "arvore.h"

using namespace std;

void Arvore::inicializar()
{
    raiz = NULL;
}

No* Arvore::inserirNovo(No* novo, No* raiz_atual)
{
    if(raiz_atual==NULL)return novo;
    if(raiz_atual->valor > novo->valor)
        raiz_atual->esquerda = inserirNovo(novo, raiz_atual->esquerda);
    else
        raiz_atual->direita = inserirNovo(novo, raiz_atual->direita);

    return raiz_atual;
}

void Arvore::inserir(int valor)
{
    No* novo = new No();
    novo->inicializarNo(valor);
    raiz=inserirNovo(novo, raiz);
}

void Arvore::preordem(No* elemento)
{
    if(elemento != NULL){
        cout<<elemento->valor;
        cout<<"\n";
        preordem(elemento->esquerda);
        preordem(elemento->direita);
    }
}
void Arvore::emordem(No* elemento)
{
    if(elemento != NULL){
        preordem(elemento->esquerda);
        cout<<elemento->valor;
        cout<<"\n";
        preordem(elemento->direita);
    }
}
void Arvore::posordem(No* elemento)
{
    if(elemento != NULL){
        preordem(elemento->esquerda);
        preordem(elemento->direita);
        cout<<elemento->valor;
        cout<<"\n";
    }
}
