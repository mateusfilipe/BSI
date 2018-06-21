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

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 3;
const int C = 3;

using namespace std;

float pot(float a, float b); //ASSINATURA DA SUBROTINA

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float a, b;
    cout<<"Digite 2 números:"<<endl;
    cin>>a>>b;
    cout<<"Resultado: "<<pot(a,b)<<endl;

    system("pause");
    return 0;
}
float pot(float a, float b){
    int r=1;
    for(int i = 0 ; i < b ; i++){
        r*=a;
    }
    return r;
}
