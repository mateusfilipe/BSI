//Mateus Filipe De Lima Souza - 2� Per�odo - BSI
/*
    Exemplo de Teste{

    Digite o tamanho do vetor:
        5

        Preencha o vetor na posi��o 0 :
        1
        Preencha o vetor na posi��o 1 :
        2
        Preencha o vetor na posi��o 2 :
        3
        Preencha o vetor na posi��o 3 :
        4
        Preencha o vetor na posi��o 4 :
        5

        M�dia: 3

    }
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>

//Vetor:

const int TAM = 1000;

using namespace std;

void preencheVetor(float vetor[TAM], int t){
    for(int i = 0 ; i < t; i++){
        cout<<"Preencha o vetor na posi��o "<<i<<" :"<<endl;
        cin>>vetor[i];
    }
}

float calcMedia(float vetor[TAM], int t);

int main()
{
    setlocale(LC_ALL , "Portuguese");

    float vetor[TAM];
    int t = 0;
    cout<<"Digite o tamanho do vetor: "<<endl;
    cin>>t;
    preencheVetor(vetor, t);
    cout<<"M�dia: "<<calcMedia(vetor, t)<<endl;


    system("pause");
    return 0;
}

float calcMedia(float vetor[TAM], int t){
    float s = 0, media;
    for(int i = 0 ; i < t ; i++){
        s+=vetor[i];
    }
    media = s/t;
    return media;
}
