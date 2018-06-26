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

int perfeito(int a, int s);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n, s=0;
    cin>>n;
    if(perfeito(n,s)==n){
        cout<<"Perfeito"<<endl;
        cout<<"Soma: "<<perfeito(n,s)<<endl;
    }else{
        cout<<"Não perfeito"<<endl;
        cout<<"Soma: "<<perfeito(n,s)<<endl;
    }


    system("PAUSE");
    return 0;
}
int perfeito(int a, int s){
    for(int i = 1 ; i < a ;i++){
        if(a%i==0)
            s+=i;
    }
    return s;
}
