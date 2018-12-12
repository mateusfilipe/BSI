#include <iostream>
#include <windows.h>
#include "tripulante.h"
#include "lista.h"

using namespace std;


//=================================================================//
bool Lista::vazia()
{
    if(primeiro == NULL)
    {
        return true;
    }
    return false;
}
//=================================================================//
void Lista::inserirAoInicio(int c, string n, int i)
{
    Tripulante* f = new Tripulante();
    f->inicializarCelula(c,n,i);
    f->prox=primeiro;
    primeiro = f;
}
//=================================================================//
void Lista::inicializar()
{
    primeiro = NULL;
};
//=================================================================//
void Lista::inserirAoFinal(int c, string n, int i)
{
    Tripulante* f = new Tripulante();
    f->inicializarCelula(c,n,i);
    if(vazia())
    {
        primeiro = f;
    }
    else
    {
        Tripulante *aux = primeiro;
        while(aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = f;
    }
}
//=================================================================//
Tripulante* Lista::pesquisar(int v)
{
    if(vazia())
        return NULL;
    else
    {
        Tripulante* aux = primeiro;
        while(aux != NULL && aux->chave != v)
        {
            aux = aux->prox;
        }
        return aux;
    }
}
//=================================================================//
bool Lista::removerInicio()
{
    if(vazia())
    {
        return false;
    }
    else
    {
        Tripulante* aux = primeiro;
        if(aux->prox == NULL)
        {
            primeiro = NULL;
        }
        else  //Tem mais de 1 elemento
        {
            primeiro = aux->prox;
            aux->prox = NULL;
        }
        delete aux;
        return true;
    }
}
//=================================================================//
bool Lista::removerFinal()
{
    if(vazia())
    {
        return false;
    }
    else
    {
        Tripulante* ant = primeiro;
        Tripulante* atual = primeiro->prox;
        if(atual != NULL)
        {
            while(atual->prox != NULL)
            {
                ant = atual;
                atual = atual->prox;
            }
            ant->prox = NULL;
        }
        else
        {
            atual = primeiro;
            primeiro = NULL;
        }
        delete atual;
        return true;
    }
}
//=================================================================//
void Lista::imprimir()
{
    Tripulante* aux = primeiro;
    while(aux != NULL)
    {
        cout<<"Chave: "<< aux->chave;
        cout<<", Nome: "<< aux->nome;
        cout<<", Idade: "<< aux->idade;
        aux = aux->prox;
        cout<<endl;
    }
}
//=================================================================//
