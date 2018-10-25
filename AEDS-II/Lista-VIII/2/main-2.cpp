#include <iostream>
#include <locale.h>
#include <windows.h>
#include "fila.cpp"

using namespace std;

void excluirElemento(int v);
Fila F1;

int main()
{
    setlocale(LC_ALL, "");
    F1.inicializar();
    int v;
    bool achou = true;

    for(int i = 1 ; i <= 5 ; i++)
    {
        F1.inserir(i);
    }
    cout<<"Antes da remoção: "<<endl;
    F1.imprimir();
    cout<<"Digite o número que deseja remover: "<<endl;
    cin>>v;

    excluirElemento(v);

    cout<<"Após a remoção: "<<endl;
    F1.imprimir();

    return 0;
    system("PAUSE");

}
void excluirElemento(int v)
{
    Celula *ant = F1.primeiro;
    Celula *apos = F1.primeiro->prox;

    if(v == F1.primeiro->valor)
    {
        F1.primeiro = apos;
        delete ant;
    }
    else
    {
        while(ant->valor!=v)
        {
            apos = ant;
            ant = ant->prox;
        }
        apos->prox = (ant->prox);
        ant->prox = NULL;
        delete ant;
    }


}
