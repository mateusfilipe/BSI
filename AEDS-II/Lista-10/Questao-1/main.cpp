#include<iostream>
#include<locale.h>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include "tabela_hash.cpp"

using namespace std;

int main ()
{
    setlocale(LC_ALL, "portuguese");

    Tabela_hash tab;
    tab.inicializar(20);
        cout<<40%11<<endl;
    cout<<3%11<<endl;

    int chaveAux, idadeAux;
    string nomeAux;

    for(int i = 0 ; i < 20 ; i++){
        cout<<"Digite a informação sobre o "<<i+1<<"º tripulante: (CHAVE / NOME / IDADE)"<<endl;
        cin>>chaveAux;
        fflush(stdin);
        getline(cin, nomeAux);
        cin>>idadeAux;

        tab.inserir(chaveAux, nomeAux, idadeAux);
    }

    int chaveB;
    Tripulante* chaveT;

    cout<<"Qual tripulante deseja buscar? "<<endl;
    cin>>chaveB;

    chaveT = tab.busca(chaveB);

    if( chaveT->chave == chaveB){
        cout<<"Tripulante está nesse voo."<<endl;
    }else{
        cout<<"Tripulante não encontrado."<<endl;
    }

    system ("pause");
}

