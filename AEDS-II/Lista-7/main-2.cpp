#include <iostream>
#include <cstring>
#include <locale.h>
#include <stdio.h>
#include "includes/pilha.cpp"

using namespace std;

void imprimeInverso(string cadeia);
void verificaPalindromo(string cadeia);

Pilha pilha1;
Pilha pilha2;
Pilha pilha3;


int main()
{
    setlocale(LC_ALL,"Portuguese");

    string cadeia;
    cout<<"Digite a frase para verificar se é palindromo: "<<endl;
    fflush(stdin);
    getline(cin, cadeia);

    cout<<"->Normal:"<<endl;
    cout<<cadeia;
    cout<<endl;

    imprimeInverso(cadeia);
    verificaPalindromo(cadeia);
    cout<<endl;
    return 0;
}
//=====================================================//
void imprimeInverso(string cadeia)
{
    setlocale(LC_ALL,"Portuguese");

    pilha1.inicializar();

    cout<<"->Inverso:"<<endl;
    int a = cadeia.size();
    for(int i = 0 ; i < a; i++)
    {
        pilha1.empilhar(cadeia[i]);
    }

    pilha1.imprimir();


}
//=====================================================//
void verificaPalindromo(string cadeia)
{
    setlocale(LC_ALL,"Portuguese");

    pilha2.inicializar();
    pilha3.inicializar();

    cout<<"\n\n->Verificando:"<<endl;

    int a = cadeia.size();

    for(int i = 0 ; i < a; i++)
    {
        if(isalpha(cadeia[i]))
        {
            pilha3.empilhar(cadeia[i]);
        }
    }
    for(int i = a ; i >= 0; i--)
    {
        if(isalpha(cadeia[i]))
        {
            pilha2.empilhar(cadeia[i]);
        }
    }
//    cout<<"Normal: ";
//    pilha2.imprimir();
//    cout<<endl;
//    cout<<"Inverso: ";
//    pilha3.imprimir();

    bool achou = false;

    for(int i = 0 ; i < pilha2.quantidade; i++)
    {
        if(pilha2.topo->valor== pilha3.topo->valor)
        {
            achou = true;
        }
        else
        {
            achou = false;
            cout<<"A expressão NÃO é palindroma."<<endl;
            break;
        }
        pilha2.desempilhar();
        pilha3.desempilhar();

    }
    if(achou==true)
    {
        cout<<"A expressão É palindroma."<<endl;
    }

}
