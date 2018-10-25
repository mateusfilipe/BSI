#include <iostream>
#include <locale.h>
#include <windows.h>
#include "fila.cpp"

using namespace std;


void incluir();
void retirar();
void printDmomento();


Fila FProcessos;

//=============================================================//
void preencher(){
    for(int i = 0 ; i < 5 ; i++){
        FProcessos.inserir(i+1, (i+1)*2.5);
    }
}
//=============================================================//
int main()
{
    setlocale(LC_ALL, "");
    FProcessos.inicializar();
    int op;
    preencher();
//    FProcessos.imprimir();
    do
    {
        cout<<"Selecione uma opção: "<<endl;
        cout<<"1 - Incluir novos processos na fila de processos."<<endl;
        cout<<"2 - Retirar da fila o processo com maior tempo de espera."<<endl;
        cout<<"3 - Imprimir conteúdo da fila de processos em determinado momento."<<endl;
        cout<<"7 - Sair."<<endl;
        cin>>op;
        if(op == 1)
            incluir();
        if(op == 2)
            retirar();
        if(op == 3)
            printDmomento();
    }
    while(op!=7);
//    FProcessos.imprimir();
    return 0;
    system("PAUSE");
}
//=============================================================//
void incluir()
{
    int idT;
    float tempoT;
    cout<<"Digite o ID e o Tempo: "<<endl;
    cin>>idT>>tempoT;
    FProcessos.inserir(idT, tempoT);
}
//=============================================================//
void retirar()
{
    Fila Faux;
    Faux.inicializar();

    Celula* aux = FProcessos.primeiro;
    float maior = -999;
    while(aux!=NULL)
    {
        if(aux->tempo > maior)
        {
            maior = aux->tempo;
        }
        aux = aux->prox;
    }

    Celula * auxFA = FProcessos.primeiro;
    for(int i = 0 ; i < 5 ; i++){
        Faux.inserir(auxFA->id, auxFA->tempo);
        auxFA = auxFA->prox;
    }
    FProcessos.esvaziar();

    Celula * aux2 = Faux.primeiro;
    while(aux2!=NULL)
    {
        if(aux2->tempo != maior)
        {
            FProcessos.inserir(aux2->id, aux2->tempo);
        }
        aux2 = aux2->prox;
    }
}
//=============================================================//
void printDmomento()
{
    Celula* aux = FProcessos.primeiro;
    float tempoT;
    bool achou = false;
    cout<<"Digite o tempo que deseja que seja impresso: "<<endl;
    cin>>tempoT;
    while(aux->tempo!=tempoT)
    {
        aux = aux->prox;
    }
    if(aux->tempo == tempoT){
        cout<<"ID = "<<aux->id;
        cout<<" | Tempo = "<<aux->tempo<<endl;
    }else{
        cout<<"Não existe processo na fila com tal tempo."<<endl;
    }
}
//=============================================================//
