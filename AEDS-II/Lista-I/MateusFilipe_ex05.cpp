 //Mateus Filipe De Lima Souza - 2º Período - BSI
/*
    Exemplo de Teste{
        Preencha o vetor de tamanho 5:
        5 6 8 7 0 3
        Menor: 0
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

using namespace std;

void dmenor(float v[TAM]);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float v[TAM];
    cout<<"Preencha o vetor de tamanho 5: "<<endl;
    for(int i = 0 ; i < TAM ; i++){
        cin>>v[i];
    }

    dmenor(v);

    system("PAUSE");
    return 0;
}
void dmenor(float v[TAM]){
    float menor = 9999;
    for(int i = 0 ; i < TAM ; i++){
        if(v[i]<menor){
            menor = v[i];
        }
    }
    cout<<"Menor: "<<menor<<endl;
}
