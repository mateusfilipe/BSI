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

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 100;
const int C = 100;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n, L[L][C], k, cont=0, estradasC[100];
    cout<<"Digite o número de cidades: ";
    cin>>n;
    cout<<"0 - Não existe trajeto; "<<endl;
    cout<<"1 - Existe trajeto; "<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i==j){
                L[i][j]=1;
            }else{
                cout<<"Digite se existe traejo entre:"<<endl;
                cout<<"CIDADE "<<i<<" -> CIDADE "<<j<<endl;
                cin>>L[i][j];
            }
        }
    }
    cout<<"Digite de qual cidade deseja saber quanas estradas saem:"<<endl;
    cin>>k;
    for(int i = 0 ; i < n ; i++){
        cont=0;
        for(int j = 0 ; j < n ; j++){
            if(L[k][k]==1){
                cont++;
            }
        }
    }
    cout<<"A cidade "<<k<<" tem "<<cont<<" estradas."<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(L[i][j]==1){
                estradasC[j]++;
            }
        }
    }
    system("pause");
    return 0;
}
