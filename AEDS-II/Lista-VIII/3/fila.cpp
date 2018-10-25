#include <iostream>
#include <cstdlib>
#include "fila.h"

using namespace std;
//=============================================================//
void Fila::inicializar()
{
    primeiro = NULL;
    ultimo = NULL;
    quantidade = 0;
}
//=============================================================//
bool Fila::vazia()
{
    return(primeiro == NULL && ultimo == NULL);
}
//=============================================================//
void Fila::inserir(int elemento, string n)
{
    Celula* novo = new Celula();
    if(novo == NULL)
        cout<<"Sem memoria disponivel."<<endl;
    else
    {
        novo->inicializarCelula(elemento, n);
        if(vazia())
        {
            primeiro = novo;
            ultimo = novo;
        }
        else
        {
            ultimo->prox = novo;
            ultimo = novo;
        }
        quantidade++;
    }
}
//=============================================================//
bool Fila::remover()
{
    if(vazia())
    {
        cout<<"A fila está vazia."<<endl;
        return false;
    }
    else
    {
        Celula* aux = primeiro;
        primeiro = aux->prox;
        if(primeiro==NULL)
            ultimo = NULL;
        delete aux;
        quantidade--;
        return true;
    }
}
//=============================================================//
void Fila::esvaziar()
{
    while(!vazia())
        remover();
}
//=============================================================//
void Fila::imprimir()
{
    if(vazia())
        cout<<"A fila esta vazia."<<endl;
    else
    {
        Celula* aux = primeiro;
        while(aux != NULL)
        {
            cout<<"Id = "<<aux->valor;
            cout<<", Nome = "<<aux->nome<<endl;
            aux = aux->prox;
        }
    }
}
//=============================================================//
