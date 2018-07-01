 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        A(n):
        2
        B(m):
        2
        Preencha o vetor:
        1 3

        Preencha o vetor:
        2 4

        A: Vetor Original: 1 | 3 |
        B: Vetor Original: 2 | 4 |
        C: Vetor Original: 1 | 2 | 3 | 4 |
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

const int L = 3;
const int C = 3;

using namespace std;

void preencheVetor(float vetor[100], float n);
void imprimeVetor(float vetor[100], float n);
void intercalaVetor(float vetorA[100], float vetorB[100], float vetorC[100], float nm);
void semRepeticao(float vetorA[100], float vetorB[100], float vetorC[100], float nm);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float vetorA[100], vetorB[100], vetorC[100], vetorC1[100], n, m;

    cout<<"A(n): "<<endl;
    cin>>n;
    cout<<"B(m): "<<endl;
    cin>>m;

    float nm = n+m;
    preencheVetor(vetorA, n);
    preencheVetor(vetorB, m);
    cout<<"A: ";
    imprimeVetor(vetorA, n);
    cout<<"B: ";
    imprimeVetor(vetorB, m);
    intercalaVetor(vetorA, vetorB, vetorC, nm);
    cout<<"C: ";
    semRepeticao(vetorA, vetorB, vetorC1, nm);
    imprimeVetor(vetorC, nm);
    cout<<"C1: ";
    imprimeVetor(vetorC1, nm);

    system("PAUSE");
    return 0;
}
void preencheVetor(float vetor[100], float n){
    cout<<"Preencha o vetor:"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>vetor[i];
    }
    cout<<endl;
}
void imprimeVetor(float vetor[100], float n){
    cout<<"Vetor Original: ";
    for(int i = 0 ; i < n ; i++){
        cout<<vetor[i]<<" | ";
    }
    cout<<endl;
}
void intercalaVetor(float vetorA[100], float vetorB[100], float vetorC[100], float nm){
    int a = 0 , b = 0;
    for(int k = 0; k < nm ; k++){
        if(k%2==0){
            vetorC[k]=vetorA[a];
            a++;
        }
        if(k%2!=0){
            vetorC[k]=vetorB[b];
            b++;
        }
    }
}
void semRepeticao(float vetorA[100], float vetorB[100], float vetorC1[100], float nm){
    for(int i = 0; i < nm ; i++){
        if(vetorA[i] != vetorB[i])
            vetorC1[i]=vetorA[i];
        if(vetorB[i]!= vetorA[i])
            vetorC1[i]=vetorB[i];
    }
}
