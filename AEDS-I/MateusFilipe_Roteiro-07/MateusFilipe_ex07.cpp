 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        Digite N e P:
        5
        2
        Arranjo: 20
        Número de combinações: 10
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

float fat(float a);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float n, p, a, c, fatorialN, fatorialP, fatorialNP;
    cout<<"Digite N e P:"<<endl;
    cin>>n>>p;
    fatorialN=fat(n);
    fatorialP=fat(p);
    fatorialNP=fat(n-p);
    a=fatorialN/fatorialNP;
    c=fatorialN/(fatorialP*fatorialNP);

    cout<<"Arranjo: "<<a<<endl;
    cout<<"Número de combinações: "<<c<<endl;

    system("PAUSE");
    return 0;
}
float fat(float a){
    float fato=1;
    if(a == 1 || a==0){
        return 1;
    }else{
        return a*fat(a-1);
    }

}
