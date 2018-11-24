#include <iostream>
#include <cstring>
#include <stdio.h>
#include <locale.h>
#include "includes/pilha.cpp"

using namespace std;

int iguais(int aP1, int aP2);

Pilha pilha1;
Pilha pilha2;
Pilha pilhaAUX;

int main()
{
    setlocale(LC_ALL, "");

    pilha1.inicializar();
    pilha2.inicializar();
    pilhaAUX.inicializar();

    string expressaoP1;
    string expressaoP2;

//=====================================================//

    cout<<"Preencha a primeira pilha: "<<endl;
    getline(cin, expressaoP1);
    int aP1 = expressaoP1.size();
    for(int i = 0 ; i < aP1 ; i++)
    {
        pilha1.empilhar(expressaoP1[i]);
    }

//=====================================================//

    cout<<"Preencha a segunda pilha: "<<endl;
    getline(cin, expressaoP2);
    int aP2 = expressaoP2.size();
    for(int i = 0 ; i < aP2 ; i++)
    {
        pilha2.empilhar(expressaoP2[i]);
    }

//=====================================================//

    if(iguais(aP1, aP2)==0)
    {
        cout<<"\nNão são iguais."<<endl;
    }
    else
    {
        cout<<"\nSão iguais."<<endl;
    }

//    cout<<"\nPilha P1: ";
//    pilha1.imprimir();
//    cout<<"\nPilha P2: ";
//    pilha2.imprimir();

}
//=====================================================//
int iguais(int aP1, int aP2)
{
    if(aP1 != aP2)
    {
        return 0;
    }
    else
    {
        Bloco *aux2 = pilha2.topo;
        Bloco *aux1 = pilha1.topo;

        int teste;

        for(int i = 0 ; i < aP1 ; i++)
        {
            if(aux2->valor == aux1->valor)
            {
                teste = 1;
            }
            else
            {
                teste = 0;
                break;
            }
            aux1 = aux1->prox;
            aux2 = aux2->prox;
        }
        return teste;
    }
}
