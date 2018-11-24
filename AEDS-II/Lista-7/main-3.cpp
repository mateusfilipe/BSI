#include <iostream>
#include <cstring>
#include <stdio.h>
#include <locale.h>
#include "includes/pilha.cpp"

using namespace std;


Pilha pilha1;
Pilha pilha2;
Pilha pilha3;

void invertePilha(string expressao, int a);

int main()
{
    setlocale(LC_ALL, "");

    pilha1.inicializar();
    pilha2.inicializar();
    pilha3.inicializar();

    string expressao;
    cout<<"Digite uma expressão: "<<endl;
    getline(cin, expressao);

    int a = expressao.size();


    for(int i = 0 ; i < a ; i++)
    {
        pilha1.empilhar(expressao[i]);
    }
    cout<<"Pilha P antes da inversão: ";
    pilha1.imprimir();

    invertePilha(expressao, a);

    cout<<"\nPilha P após a inversão: ";
    pilha1.imprimir();
}
//=====================================================//
void invertePilha(string expressao, int a)
{
    for(int i = 0 ; i < a ; i++)
    {
        pilha2.empilhar(pilha1.topo->valor);
        pilha1.desempilhar();
    }
    for(int i = 0 ; i < a ; i++)
    {
        pilha3.empilhar(pilha2.topo->valor);
        pilha2.desempilhar();
    }
    for(int i = 0 ; i < a ; i++)
    {
        pilha1.empilhar(pilha3.topo->valor);
        pilha3.desempilhar();
    }
}
