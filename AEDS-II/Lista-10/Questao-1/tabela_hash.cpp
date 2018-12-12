#include<iostream>
#include "tabela_hash.h"

using namespace std;

//=================================================================//
void Tabela_hash::inicializar(int n)
{
    tamanho = n;
    vetor_hash = new Lista[tamanho];
    for(int i = 0 ; i < tamanho ; i++)
    {
        vetor_hash[i].inicializar();
    }
}
//=================================================================//
int Tabela_hash::funcao_hash(int chave)
{
    return(chave%tamanho);
}
//=================================================================//
void Tabela_hash::inserir(int c, string n, int i)
{
    int h = funcao_hash(c);
    vetor_hash[h].inserirAoFinal(c, n, i);
}
//=================================================================//
Tripulante* Tabela_hash::busca(int chave)
{
    int h = funcao_hash(chave);
    Tripulante* p = vetor_hash[h].pesquisar(chave);
    if(p!=NULL){
        return p;
    }
    return NULL;
}
//=================================================================//
