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
float fat(float a);
float pot(float a, float b);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float x, radx=0, j=0, cosenox=0, cosenox1=0;

    cin>>x;
    convRad(x, radx);
//  cout<<radx<<endl;
    for(int i = 0 ; i < 20 ; i++){

        if(i%2==0){
            cosenox-=pot(radx,j)/fat(j);
        }
        if(i%2!=0){
            cosenox+=pot(radx,j)/fat(j);
        }

        j+=2;
        //cout<<"j:"<<j<<endl;
        //cout<<"cose:"<<cosenox<<endl;
    }
    cout<<"Coseno de x: "<<cosenox*(-1)<<endl;
    system("PAUSE");
    return 0;
}
float convRad(float x, float &radx){
    radx=(x*pi)/180;
    return radx;
}
float fat(float a){
    if(a==1 || a==0){
        return 1;
    }else{
        return a*fat(a-1);
    }
}
float pot(float a, float b){
    float r=1;
    for(int i = 0 ; i < b ; i++){
        r*=a;
    }
    return r;
}
