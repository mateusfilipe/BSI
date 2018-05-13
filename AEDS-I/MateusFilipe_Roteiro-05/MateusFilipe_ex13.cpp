 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste:
    Entrada: 1 2 3 4 5 6 7 8 9 10
             10 9 8 7 6 5 4 3 2 1
             ;
    Saída: 11 11 11 11 11 11 11 11 11;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 10;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float v1[TAM], v2[TAM], vsoma[TAM];
    for(int i = 0 ; i < TAM ; i++){
        cout<<"Preencha o PRIMEIRO vetor na posição "<<i<<endl;
        cin>>v1[i];
    }
    for(int i = 0 ; i < TAM ; i++){
        cout<<"Preencha o SEGUNDO vetor na posição "<<i<<endl;
        cin>>v2[i];
    }
    for(int i = 0 ; i < TAM ; i++){
        vsoma[i]=v1[i]+v2[i];
    }
    cout<<"Vet1 = [";
    for(int i = 0 ; i < TAM ; i++){
        cout<<v1[i]<<" ";
    }
    cout<<"]"<<endl;

    cout<<"Vet2 = [";
    for(int i = 0 ; i < TAM ; i++){
        cout<<v2[i]<<" ";
    }
    cout<<"]"<<endl;

    cout<<"Vet3 = [";
    for(int i = 0 ; i < TAM ; i++){
        cout<<vsoma[i]<<" ";
    }
    cout<<"]"<<endl;
    system("pause");
    return 0;
}
