#include <iostream>
#include <cstdlib>
#include "lista.h"

using namespace std;
//=====================================================//
void Lista::inicializar()
{
    cabeca = new Registro();
    cabeca->prox=cabeca;
    cabeca->ant=cabeca;
}
//=====================================================//
bool Lista::vazia()
{
    return (cabeca->prox==cabeca && cabeca->ant==cabeca);//Teste
}
//=====================================================//
void Lista::inserirAoFinal(Registro *c)
{
    if(vazia())
    {
        cabeca->prox=c;
        c->ant=cabeca;
        c->prox=cabeca;
        cabeca->ant=c;
    }
    else
    {
        Registro *aux = cabeca->ant;
        aux->prox=c;
        c->ant=aux;
        c->prox=cabeca;
        cabeca->ant=c;
    }
}
//=====================================================//
void Lista::inserirAoInicio(Registro *c)
{
    Registro* aux = cabeca->prox;
    cabeca->prox=c;
    c->ant=cabeca;
    c->prox=aux;
    aux->ant=c;
}
//=====================================================//
Registro* Lista::pesquisar(int v)
{
    if(vazia())
    {
        return NULL;
    }
    else
    {
        Registro* aux = cabeca->prox;
        while(aux!=cabeca && aux->num_registro!=v)
        {
            aux=aux->prox;
        }
        return aux;
    }
}
//=====================================================//
bool Lista::removerInicio()
{
    if(vazia())
    {
        return false;
    }
    else
    {
        Registro* aux = cabeca->prox;
        (aux->prox)->ant=cabeca;
        aux->prox=NULL;
        aux->ant=NULL;
        delete aux;
        return true;
    }
}
//=====================================================//
bool Lista::removerFinal()
{
    if(vazia())
    {
        return false;
    }
    else
    {
        Registro* aux = cabeca->prox;
        cabeca->ant=aux->ant;
        (aux->ant)->prox=cabeca;
        aux->prox=NULL;
        aux->ant=NULL;
        delete aux;
        return true;
    }
}
//=====================================================//
void Lista::imprimir()
{
    Registro* aux = cabeca->prox;
    while(aux!=cabeca)
    {
        cout<<"Registro = "<<aux->num_registro<<endl;
        aux=aux->prox;
    }
}
//=====================================================//
