 //Mateus Filipe De Lima Souza - 2º Período - BSI
/*
    Exemplo de Teste{
        Digite o tamanho do vetor:
        6
        Preencha o vetor:
        0 1 2 3 4 -99
        Menor valor do vetor: -99
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

const int TAM = 1000;


using namespace std;

float dmenor(float v[], int t){

    if(t==1){
        return v[0];
    }else{
        if(dmenor(v,t-1)<v[t-1]){
            return dmenor(v,t-1);
        }else{
            return v[t-1];
        }
    }
}

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float v[TAM];
    int t;
    cout<<"Digite o tamanho do vetor: "<<endl;
    cin>>t;
    cout<<"Preencha o vetor: "<<endl;
    for(int i = 0 ; i < t ; i++){
        cin>>v[i];
    }
    cout<<"Menor valor do vetor: "<<dmenor(v,t)<<endl;
    system("PAUSE");
    return 0;
}

