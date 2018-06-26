 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        Entrada : 5 2 3 1 4;
        Saída : 1 2 3 4 5;
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

const int TAM = 5;

//Matriz:

const int L = 3;
const int C = 3;

using namespace std;

void ordena(float v[TAM]);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float v[TAM];
    for(int i = 0 ; i < TAM ; i++){
        cin>>v[i];
    }
    ordena(v);
    cout<<endl;
    for(int i = 0 ; i < TAM ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    system("PAUSE");
    return 0;
}
void ordena(float v[TAM]){
    float aux;
    for(int i = 0 ; i < TAM ; i++){
        for(int j = 0 ; j < TAM ; j++){
            if(v[i]<v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}

