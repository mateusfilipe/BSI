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
        cout<<"Escolha uma op��o: "<<endl;
        cout<<"1 - Listar n�mero de avi�es na fila de decolagem."<<endl;
        cout<<"2 - Autorizar a decolagem do primeiro avi�o da fila."<<endl;
        cout<<"3 - Adicionar um avi�o a fila de espera."<<endl;
        cout<<"4 - Listar os avi�es na fila de espera."<<endl;
        cout<<"5 - Listar caracteristicas do primeiro avi�o."<<endl;
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
    cout<<"Est�o enfileirados "<<F1.quantidade<<" avi�es"<<endl;
}
//======================================================================================//
void autorizarDecolagem(){
    F1.remover();
}
//======================================================================================//
void adiocionarAviao(){
    int tid;
    string tnome;
    cout<<"Digite o ID do avi�o e o modelo dele: "<<endl;
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
    cout<<"Primeiro avi�o: \n Id: "<<F1.primeiro->valor<<", Nome: "<<F1.primeiro->nome<<endl;
}
//======================================================================================//
