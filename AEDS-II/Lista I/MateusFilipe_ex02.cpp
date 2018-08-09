//Mateus Filipe De Lima Souza - 2º Período - BSI
/*
    Exemplo de Teste{
        Digite o primeiro número:
        50
        Digite o segundo número:
        35
        MDC = 5
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

int calcMDC(int a , int b);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int a , b;
    cout<<"Digite o primeiro número: "<<endl;
    cin>>a;
    cout<<"Digite o segundo número: "<<endl;
    cin>>b;

    cout<<"MDC = "<<calcMDC(a,b)<<endl;


    system("pause");
    return 0;
}
int calcMDC(int n1 , int n2){
    int maior, menor, aux;
    if(n1>n2){
        maior = n1;
        menor = n2;
    }else if( n1 == n2){
        return n1;
    }else{
        maior = n2;
        menor = n1;
    }
    aux = maior%menor;
    while(aux!=0){
        maior = menor;
        menor = aux;
        aux = maior%menor;
    }
    return menor;
}
