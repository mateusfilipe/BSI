 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste com 5:
    Entrada: 5 6 7 4 99;
    Saída: 99 4 7 6 5;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 20;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float vet[TAM], veTrocado[TAM];
    for(int i = 0 ; i < TAM ; i++){
        cout<<"Preencha o primeiro vetor na posição "<<i<<": ";
        cin>>vet[i];

    }
    cout<<"Vetor Normal [ ";
    for(int i = 0, j = TAM-1 ; i < TAM ; i++ , j--){
        veTrocado[i]=vet[j];
        cout<<vet[i]<<" ";
    }
    cout<<"]"<<endl;
    cout<<"Vetor Trocado [ ";
    for(int i = 0, j = TAM-1 ; i < TAM ; i++ , j--){
        cout<<veTrocado[i]<<" ";
    }
    cout<<"]"<<endl;

    cout<<endl;
    system("pause");
    return 0;
}
