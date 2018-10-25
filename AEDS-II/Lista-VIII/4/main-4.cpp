#include <iostream>
#include <locale.h>
#include <windows.h>
#include "fila.cpp"

using namespace std;

Fila FTodos;
Fila FNormal;
Fila FPreferencial;

void preferencia();

int main()
{
    setlocale(LC_ALL, "");
    FTodos.inicializar();
    FNormal.inicializar();
    FPreferencial.inicializar();
    int  npFila, idade;
    string nome;
    cout<<"Digite quantas pessoa estão na fila: "<<endl;
    cin>>npFila;
    for(int i = 0 ; i < npFila ; i++)
    {
        cout<<"Digite o nome do "<<i+1<<"º da fila: "<<endl;
        fflush(stdin);
        getline(cin, nome);
        cout<<"Digite a idade do "<<i+1<<"º da fila: "<<endl;
        cin>>idade;
        FTodos.inserir(idade,nome);

    }
    preferencia();
    cout<<"Normal: "<<endl;
    FNormal.imprimir();

    cout<<"Preferencial: "<<endl;
    FPreferencial.imprimir();

    return 0;
    system("PAUSE");
}
void preferencia()
{
    Celula* aux = FTodos.primeiro;
    while(aux!=NULL)
    {
        if(aux->valor >= 60)
        {
            FPreferencial.inserir(aux->valor, aux->nome);
        }
        else
        {
            FNormal.inserir(aux->valor, aux->nome);

        }
        aux = aux->prox;
    }
}
