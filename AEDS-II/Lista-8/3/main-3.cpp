#include <iostream>
#include <locale.h>
#include <windows.h>
#include "fila.cpp"

using namespace std;

void listarNumeros();
void autorizarDecolagem();
void adiocionarAviao();
void listarAvioes();
void primeiroAviao();

Fila F1;

int main()
{
    setlocale(LC_ALL, "");
    F1.inicializar();
    string modelos[4] = {"Alfa","Beta","Lambda","Teta"};
    {
    for(int i = 0 ; i < 4 ; i++)
        F1.inserir(i+1, modelos[i]);
    }
    int op;
    do{
        cout<<"Escolha uma opção: "<<endl;
        cout<<"1 - Listar número de aviões na fila de decolagem."<<endl;
        cout<<"2 - Autorizar a decolagem do primeiro avião da fila."<<endl;
        cout<<"3 - Adicionar um avião a fila de espera."<<endl;
        cout<<"4 - Listar os aviões na fila de espera."<<endl;
        cout<<"5 - Listar caracteristicas do primeiro avião."<<endl;
        cout<<"7 - Sair."<<endl;
        cin>>op;
        if(op == 1)
            listarNumeros();
        if(op == 2)
            autorizarDecolagem();
        if(op == 3)
            adiocionarAviao();
        if(op == 4)
            listarAvioes();
        if(op == 5)
            primeiroAviao();

    }while(op != 7);

    return 0;
    system("PAUSE");
}
//======================================================================================//
void listarNumeros(){
    cout<<"Estão enfileirados "<<F1.quantidade<<" aviões"<<endl;
}
//======================================================================================//
void autorizarDecolagem(){
    F1.remover();
}
//======================================================================================//
void adiocionarAviao(){
    int tid;
    string tnome;
    cout<<"Digite o ID do avião e o modelo dele: "<<endl;
    cin>>tid;
    fflush(stdin);
    getline(cin, tnome);
    F1.inserir(tid, tnome);
}
//======================================================================================//
void listarAvioes(){
    F1.imprimir();
}
//======================================================================================//
void primeiroAviao(){
    cout<<"Primeiro avião: \n Id: "<<F1.primeiro->valor<<", Nome: "<<F1.primeiro->nome<<endl;
}
//======================================================================================//
