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
#define pi 3.14159265359

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 3;
const int C = 3;

using namespace std;
float convRad(float x, float &radx);
float

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float x, radx=0;
    cin>>x;
    convRad(x, radx);
//  cout<<radx<<endl;
    for(int i = 0 ; i < 20 ; i++){
        if(i%2==0)

        if(i%2!=0)
    }
    system("PAUSE");
    return 0;
}
float convRad(float x, float &radx){
    radx=(x*pi)/180;
    return radx;
}
