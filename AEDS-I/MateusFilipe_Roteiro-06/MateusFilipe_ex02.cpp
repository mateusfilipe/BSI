 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{

        Origem:
        41 17 34 00 19
        24 28 08 12 14
        05 45 31 27 11

        Vetor: 111 86 119
        Maior soma está na linha: 2

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

const int L = 3;
const int C = 5;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float A[L][C], vet[L], maiorLinha, maior=-1000;
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            A[i][j]=rand()%50;
        }
        vet[i]=0;
    }
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            vet[i]+=A[i][j];
        }
        if(vet[i]>maior){
            maior=vet[i];
            maiorLinha=i;
        }

    }
    cout<<"Origem: ";
    for(int i = 0 ; i < L ; i++){
        cout<<endl;
        for(int j = 0 ; j < C ; j++){
            cout<<A[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"Vetor: ";
    for(int i = 0 ; i < L ; i++){
            cout<<vet[i]<<" ";
    }
    cout<<endl;
    cout<<"Maior soma está na linha: "<<maiorLinha<<endl;
    system("pause");
    return 0;
}
