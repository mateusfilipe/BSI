#include <iostream>
#include <cstdlib>
#include "lista.h"

using namespace std;

void Lista::inicializar()
{
    primeiro = NULL;
}
bool Lista::vazia()
{
    return (primeiro==NULL);
}
void Lista::inserirAoFinal(Aluno* a)
{
    if(vazia())
    {
        primeiro = a;
    }
    else
    {
        Aluno* aux = primeiro;
        while(aux->prox != NULL)
        {
            aux =  aux->prox;
        }
        aux->prox = a;
        a->ant = aux;
    }
}
void Lista::inserirAoInicio(Aluno* a)
{
    if(!vazia())
    {
        a->prox=primeiro;
        primeiro->ant=a;
    }
    primeiro = a;
}
Aluno* Lista::pesquisar(int v)
{
    if(vazia())
    {
        return NULL;
    }
    else
    {
        Aluno *aux = primeiro;
        while(aux!=NULL && aux->matricula != v)
        {
            aux = aux->prox;
        }
        return aux;
    }
}
Aluno* Lista::removerBusca(int v)
{
    if(vazia())
    {
        return NULL;
    }
    else
    {
        Aluno *aux = primeiro;
        while(aux->matricula != v)
        {
            aux = aux->prox;
        }
        (aux->prox)->ant=aux->ant;
        (aux->ant)->prox=aux->prox;
        delete aux;

    }
}
bool Lista::removerInicio()
{
    if(vazia())
    {
        return false;
    }
    else
    {
        Aluno* aux = primeiro;
        if(aux->prox==NULL)
        {
            primeiro = NULL;
        }
        else
        {
            primeiro = aux->prox;
            primeiro->ant=NULL;
            aux->prox=NULL;
        }
        delete aux;
        return true;
    }
}
bool Lista::removerFinal()
{
    if(vazia())
    {
        return false;
    }
    else
    {
        Aluno* aux = primeiro;
        while(aux->prox != NULL)
        {
            aux = aux->prox;
        }
        if(aux->ant!=NULL)
        {
            (aux->ant)->prox=NULL;
        }
        aux->ant=NULL;
        delete aux;
        return true;
    }
}
float Lista::media(Aluno *a)
{
    float media, soma=0;

    for(int i = 0 ; i < 4 ; i++)
    {
        soma+=a->notas[i];
    }
    media = soma / 4;
    return media;
}
void Lista::imprimir()
{
    Aluno* aux = primeiro;
    Lista al;
    while(aux!=NULL)
    {
        cout<<"Matricula: "<<aux->matricula;
        cout<<", Nome: "<<aux->nome;
        cout<<", Media: ";
        cout<<al.media(aux)<<endl;
        aux = aux->prox;
    }
}

