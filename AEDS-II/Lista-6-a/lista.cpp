//Mateus Filipe De Lima Souza - BSI

#include <iostream>
#include <windows.h>
#include "lista.h"
using namespace std;


//======================================//
bool Lista::vazia()
{
    if(primeiro == NULL)
    {
        return true;
    }
    return false;
}
//======================================//
void Lista::inserirAoInicio(Funcionario *f)
{
    f->prox=primeiro;
    primeiro = f;
}
//======================================//
void Lista::inicializar()
{
    primeiro = NULL;
};
//======================================//
void Lista::inserirAoFinal(Funcionario *f)
{
    if(vazia())
    {
        primeiro = f;
    }
    else
    {
        Funcionario *aux = primeiro;
        while(aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = f;
    }
}
//======================================//
Funcionario* Lista::pesquisar(int v)
{
    if(vazia())
        return NULL;
    else
    {
        Funcionario* aux = primeiro;
        while(aux != NULL && aux->matricula != v)
        {
            aux = aux->prox;
        }
        return aux;
    }
}
//======================================//
bool Lista::removerInicio()
{
    if(vazia())
    {
        return false;
    }
    else
    {
        Funcionario* aux = primeiro;
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
//======================================//
bool Lista::removerFinal()
{
    if(vazia())
    {
        return false;
    }
    else
    {
        Funcionario* ant = primeiro;
        Funcionario* atual = primeiro->prox;
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
//======================================//
void Lista::imprimir()
{
    Funcionario* aux = primeiro;
    while(aux != NULL)
    {
        cout<<"Nome: "<< aux->nome;
        cout<<", Salario: "<< aux->salario;
        aux = aux->prox;
        cout<<endl;
    }
}
//======================================//

