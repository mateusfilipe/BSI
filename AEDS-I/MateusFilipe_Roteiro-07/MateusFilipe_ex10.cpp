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
#include <iomanip>
#include <string>
#include <time.h>
#define pi 3.14159265359

//Vetor:

const int TAM = 100;

//Matriz:

const int L = 3;
const int C = 3;

using namespace std;

void alet(int x[TAM]);
void maiomeno(int x[TAM]);
void desvio(int x[TAM]);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int x[TAM];
    for(int i = 0 ; i <  TAM; i++){
        x[i]=0;
    }
    alet(x);
//    for(int i = 0 ; i <  TAM; i++){
//        cout<<x[i]<<endl;
//    }
    maiomeno(x);
    desvio(x);
    cout<<endl;
    system("PAUSE");
    return 0;
}

void alet(int x[TAM]){
    srand(time(NULL));
    int m;
    for(int i = 0; i < 10000; i++){
        m=rand()%TAM;
        x[m]++;
    }
}
void maiomeno(int x[TAM]){
    int maior = -1000, menor = 1000, m1,m2;
    for(int i = 0 ; i < TAM ; i ++){
        if(x[i]>maior){
            maior = x[i];
            m1=i;
        }
        if(x[i]<menor){
            menor = x[i];
            m2=i;
        }
    }
    cout<<"\nMais se repetiu = "<<m1<<" : "<<maior<<" vezes"<<endl;
    cout<<"\nMenos se repetiu = "<<m2<<" : "<<menor<<" vezes"<<endl;
    cout<<"\nDiferença de repetições entre : "<<m1<<" e "<<m2<<" = "<<maior-menor<<endl;

}
void desvio(int x[TAM]){
    float s=0, media=0 ;
    float desvio=0, somatorio=0;

    for(int i = 0 ; i < 100 ; i++){
        s+=x[i];
    }
    media=s/100;
    for(int i = 0; i < 100 ; i++){
        somatorio+=pow((x[i]-media),2);
    }
    desvio=sqrt(somatorio/(100-1));
//    cout<<"\ns: "<<s<<endl;
//    cout<<"\nmedia: "<<media<<endl;
//    cout<<"\nsomatorio: "<<somatorio<<endl;
    cout<<"\nDesvio: "<<desvio<<endl;
}
