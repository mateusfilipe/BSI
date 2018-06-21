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

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 3;
const int C = 3;

using namespace std;

float nFat(float n);
float pFat(float p);
float npFat(float p, float n);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float n, p, a, c, fatorialN, fatorialP, fatorialNP;
    cout<<"Digite N e P:"<<endl;
    cin>>n>>p;
    fatorialN=nFat(n);
    fatorialP=pFat(p);
    fatorialNP=npFat(p,n);
    a=fatorialN/fatorialNP;
    c=fatorialN/(fatorialP*fatorialNP);


    cout<<"Arranjo: "<<a<<endl;
    cout<<"Número de combinações: "<<c<<endl;

    system("PAUSE");
    return 0;
}
float nFat(float n){
    float nfato=1;
    for(int i = n ; i > 0 ; i--){
        nfato*=i;
    }
    return nfato;
}
float pFat(float p){
    float pfato=1;
    for(int i = p ; i > 0 ; i--){
        pfato*=i;
    }
    return pfato;
}
float npFat(float p, float n){
    float npfato=1;
    for(int i = n-p; i > 0 ; i--){
        npfato*=i;
    }
    return npfato;
}
