#include <iostream>
#include <cstring>
#include <stdio.h>
#include <locale.h>
#include "pilha.cpp"

using namespace std;

Pilha pilhaVagas;

int main()
{
    pilhaVagas.inicializar();
    setlocale(LC_ALL, "");
    int vaga, acao;
    string placa;
    for(int i = 0 ; i < 8 ; i++)
    {
        pilhaVagas.empilhar(" * ");
    }
    while(acao!=5)
    {
        cout<<"Escolha uma a��o: "<<endl;
        cout<<"-Digite 1 para adicionar um carro."<<endl;
        cout<<"-Digite 0 para remover um carro."<<endl;
        cout<<"-Digite 5 para sair."<<endl;
        cin>>acao;
        Bloco *aux = pilhaVagas.topo;

        if(acao==1)
        {
            cout<<"Digite a vaga que ser� ocupada: "<<endl;
            cin>>vaga;
            cout<<"Digite a placa do carro que ocupar�: "<<endl;
            fflush(stdin);
            getline(cin, placa);
            for(int i = 1 ; i <= 8 ; i++)
            {
                if(i==vaga)
                {
                    if(aux->valor==" * ")
                    {
                        aux->valor = placa;
                    }
                    else
                    {
                        cout<<"Vaga j� ocupada."<<endl;
                    }
                }
                aux = aux->prox;
            }
        }else if(acao==0){
            cout<<"Digite a vaga que ser� desocupada: "<<endl;
            cin>>vaga;
            for(int i = 1 ; i <= 8 ; i++)
            {
                if(i==vaga)
                {
                    if(aux->valor == " * ")
                    {
                        cout<<"Vaga j� est� vazia."<<endl;
                    }
                    else
                    {
                        aux->valor = " * ";
                    }
                }
                aux = aux->prox;
            }
        }
        cout<<endl;
        pilhaVagas.imprimir();
        cout<<endl;
    }
    return 0;
}
