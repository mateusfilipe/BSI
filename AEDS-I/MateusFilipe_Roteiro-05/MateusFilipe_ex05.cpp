//Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste com 5:
    Entrada:  1.50, 1.60, 1.70, 1.80, 1.90;
    Saída: Atleta nº1 não pode participar.
           Atleta nº2 não pode participar.
           Atleta nº3 pode participar.
           Atleta nº4 pode participar.
           Atleta nº5 pode participar.;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 5;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float alturas[TAM], soma=0, media=0;
    for(int i = 0 ; i < TAM ; i++){
        cout<<"Digite a altura do competidor "<<i+1<<" :"<<endl;
        cin>>alturas[i];
        soma+=alturas[i];
    }
    media=soma/TAM;
    for(int i = 0 ; i < TAM ; i ++){
        if(alturas[i]>=media){
            cout<<"Atleta nº"<<i+1<<" pode participar."<<endl;
        }else{
            cout<<"Atleta nº"<<i+1<<" não pode participar."<<endl;
        }
    }

    system("pause");
    return 0;
}
