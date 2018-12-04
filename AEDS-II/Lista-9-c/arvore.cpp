#include <iostream>
#include <stdio.h>
#include "arvore.h"

using namespace std;

void Arvore::inicializar()
{
    raiz = NULL;
}

No* Arvore::inserirNovo(No* novo, No* raiz_atual)
{
    if(raiz_atual==NULL)
        return novo;
    if(raiz_atual->valor > novo->valor)
        raiz_atual->esquerda = inserirNovo(novo, raiz_atual->esquerda);
    else
        raiz_atual->direita = inserirNovo(novo, raiz_atual->direita);

    return raiz_atual;
}

void Arvore::inserir(int valor, string nome)
{
    No* novo = new No();
    novo->inicializarNo(valor, nome);
    raiz=inserirNovo(novo, raiz);
}

No* Arvore::encontrarElementoPai(No* atual, int valor)
{
    if(atual == NULL)
        return NULL;
    if(atual->direita != NULL)
    {
        if(atual->direita->valor == valor)
            return atual;
    }
    if(atual->esquerda != NULL)
    {
        if(atual->esquerda->valor == valor)
            return atual;
    }
    if(valor >= atual->valor)
        return encontrarElementoPai(atual->direita, valor);
    if(valor < atual->valor)
        return encontrarElementoPai(atual->esquerda, valor);
}
No* Arvore::encontrarMenorElementoEsquerda(No* atual_direita)
{
    if(atual_direita->esquerda == NULL)
    {
        return atual_direita;
    }
    else
    {
        return encontrarMenorElementoEsquerda(atual_direita->esquerda);
    }
}
bool Arvore::remover(int valor, string nome)
{
    if(raiz == NULL)
        return false;
    else
    {
        No* pai;
        No* noX;
        if(raiz->valor != valor)
        {
            pai = encontrarElementoPai(raiz, valor);
            if(valor >= pai->valor)
                noX = pai->direita;
            else
                noX = pai->esquerda;
        }
        else
        {
            pai = raiz;
            noX = raiz;
        }
        //CASO - 1
        if(noX->direita == NULL && noX->esquerda == NULL)
        {
            if(noX == pai->direita)
            {
                pai->direita = NULL;
                delete noX;
                return true;
            }
            else
            {
                pai->esquerda = NULL;
                delete noX;
                return true;
            }
        }
        //CASO - 2
        if(noX->esquerda == NULL)
        {
            if(noX == pai->direita)
            {
                pai->direita = noX->direita;
                delete noX;
                return true;
            }
            else
            {
                pai->esquerda = noX->direita;
                delete noX;
                return true;
            }
        }
        if(noX->direita == NULL)
        {
            if(noX == pai->direita)
            {
                pai->direita = noX->esquerda;
                delete noX;
                return true;
            }
            else
            {
                pai->esquerda = noX->esquerda;
                delete noX;
                return true;
            }
        }
        //CASO - 3
        if(noX->direita != NULL && noX->esquerda != NULL){
            No* esq = encontrarMenorElementoEsquerda(noX->direita);
            int valor = esq->valor;
            string nome = esq->nome;
            remover(esq->valor, esq->nome);
            noX->valor = valor;
            noX->nome = nome;
            return true;
        }
    }
}

void Arvore::preordem(No* elemento)
{
    if(elemento != NULL)
    {
        cout<<elemento->valor;
        cout<<", "<<elemento->nome;
        cout<<"\n";
        preordem(elemento->esquerda);
        preordem(elemento->direita);
    }
}
void Arvore::emordem(No* elemento)
{
    if(elemento != NULL)
    {
        preordem(elemento->esquerda);
        cout<<elemento->valor;
        cout<<", "<<elemento->nome;
        cout<<"\n";
        preordem(elemento->direita);
    }
}
void Arvore::posordem(No* elemento)
{
    if(elemento != NULL)
    {
        preordem(elemento->esquerda);
        preordem(elemento->direita);
        cout<<elemento->valor;
        cout<<", "<<elemento->nome;
        cout<<"\n";
    }
}
