 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste com 5:
    Entrada: -1 11 1 2 3;
    Saída: Ficaram fora da faixa 2 notas
           Foram elas 11, -1;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 30;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float notas[TAM],foraFaixa[TAM], fora=0;
    for(int i = 0 ; i < TAM ; i ++){
        foraFaixa[i]=0;
    }


    for(int i = 0; i < TAM ; i++){
        cout<<"Preencha o vetor na posição "<<i<<": ";
        cin>>notas[i];
        if(notas[i] < 0 || notas[i] > 10){
            foraFaixa[i]=notas[i];
            fora++;
        }
    }
    cout<<endl;
    cout<<"Ficaram fora da faixa "<<fora<<" notas"<<endl;
    cout<<"Foram elas: ";
    for(int i = 0 ; i < TAM ; i++){
        if(foraFaixa[i]!=0){
            cout<<foraFaixa[i]<<", ";
        }
    }
    cout<<endl;

    system("pause");
    return 0;
}
