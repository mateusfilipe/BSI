#include <iostream>
#include <cstring>
#include <stdio.h>
#include <locale.h>
#include "includes/pilha.cpp"

using namespace std;

bool transferirElementos(string expressao, int a);

Pilha pilha1;
Pilha pilha2;
Pilha pilhaAUX;

int main()
{
    setlocale(LC_ALL, "");

    pilha1.inicializar();
    pilha2.inicializar();
    pilhaAUX.inicializar();

    string expressao;
    cout<<"Preencha a primeira pilha: "<<endl;
    getline(cin, expressao);
    int a = expressao.size();


    for(int i = 0 ; i < a ; i++)
    {
        pilha1.empilhar(expressao[i]);
    }

    if(transferirElementos(expressao, a)){
        cout<<"\nTransferência feita com sucesso."<<endl;
    }else{
        cout<<"\nFalha ao transferir."<<endl;
    }

    cout<<"\nPilha P1: ";
    pilha1.imprimir();
    cout<<"\nPilha P2: ";
    pilha2.imprimir();
}
//=====================================================//
bool transferirElementos(string expressao, int a)
{
    Bloco *aux = pilha1.topo;
    for(int i = 0 ; i < a ; i++){
        pilhaAUX.empilhar(aux->valor);
        aux = aux->prox;
    }
    for(int i = 0 ; i < a ; i++){
        pilha2.empilhar(pilhaAUX.topo->valor);
        pilhaAUX.desempilhar();
    }
    Bloco *aux2 = pilha2.topo;
    Bloco *aux1 = pilha1.topo;

    bool teste = false;

    for(int i = 0 ; i < a ; i++){
        if(aux2->valor == aux1->valor){
            teste = true;
        }else{
            teste = false;
        }
        aux1 = aux1->prox;
        aux2 = aux2->prox;
    }
    return teste;
}
