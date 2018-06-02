//Mateus Filipe De Lima Souza - 1º Período - BSI
/*
	Exemplo de Teste{
        Preencha a matriz:
                1 2 3 4 5 6 7
              0 1 2 3 4 5 6
           -1 0 1 2 3 4 5
        -2 -1 0 1 2 3 4

            MINMAX = 4
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

const int L = 4;
const int C = 7;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float matriz[L][C], menor = 1000, MinMax;
    int linhaM;
    cout<<"Preencha a matriz: "<<endl;
    for(int i = 0 ;  i < L ; i++){
        for(int j =  0 ; j < C ; j++){

            cin>>matriz[i][j];
        }
    }
    for(int i  = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            if(matriz[i][j]<menor){
                menor=matriz[i][j];
                linhaM=i;
            }
        }
    }
    for(int j = 0 ; j < C ; j++){
        for(int k = 0 ; k < C ; k++){
            if(matriz[linhaM][j]>matriz[linhaM][k]){
                MinMax=matriz[linhaM][j];
            }
        }
    }
    cout<<"\nMINMAX = "<<MinMax<<endl;
    system("pause");
    return 0;
}
