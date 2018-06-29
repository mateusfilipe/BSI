 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{

    }
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>
#include <string>

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 12;
const int C = 4;

using namespace std;

void menu(){
    cout << setw(70) << setfill('=');
    cout<<"\n";
        cout<<"\t      MARIAS UNIDAS"<<endl;
    cout << setw(70) << setfill('=');
    cout<<"\n";
        cout<<"a. Vender passagem"<<endl;
        cout<<"b. Mostrar mapa de ocupação do ônibus"<<endl;
        cout<<"c. Encerrar"<<endl;
	cout << setw(70) << setfill('=');
    cout<<"\n";
}

void verifica(int lugares[L][C]);
void mapa(int lugares[L][C]);
int main()
{
    setlocale(LC_ALL , "Portuguese");

    int lugares[L][C], L1, C1;
    char op;
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            lugares[i][j]=0;
        }
    }
    do{
        menu();
        cin>>op;
        tolower(op);
        switch(op){
            case 'a':
                verifica(lugares);
            break;
            case 'b':
                mapa(lugares);
            break;
        }
    }while(op!='c');
    system("PAUSE");
    return 0;
}
void verifica(int lugares[L][C]){
    int L1, C1;
    cout<<"Digite as coordenadas das poltronas que foram vendidas(Linha/Coluna): "<<endl;
    cin>>L1>>C1;
    for(int i = L1 ; i <= L1 ; i++){
            for(int j = C1 ; j <= C1 ; j++){
                if(lugares[L1][C1]!=1){
                    lugares[L1][C1]=1;
                    cout<<"Venda efetivada"<<endl;
                    break;
                }else if(lugares[L1][C1]==1){
                    cout<<"Poltrona ocupada"<<endl;
                    break;
                }
            }
    }
}
void mapa(int lugares[L][C]){
    cout<<"\t     Mapa de ocupação"<<endl;
    cout<<"\t0\t1\t2\t3"<<endl;
    cout << setw(70) << setfill('=');
    cout<<"\n";
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            cout<<"\t"<<lugares[i][j]<<" ";
        }
        cout<<endl;
    }
}
