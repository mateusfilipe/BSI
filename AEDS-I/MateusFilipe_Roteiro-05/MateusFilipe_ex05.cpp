//Mateus Filipe De Lima Souza - 1� Per�odo - BSI
/*
    Exemplos de teste com 5:
    Entrada:  1.50, 1.60, 1.70, 1.80, 1.90;
    Sa�da: Atleta n�1 n�o pode participar.
           Atleta n�2 n�o pode participar.
           Atleta n�3 pode participar.
           Atleta n�4 pode participar.
           Atleta n�5 pode participar.;

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
            cout<<"Atleta n�"<<i+1<<" pode participar."<<endl;
        }else{
            cout<<"Atleta n�"<<i+1<<" n�o pode participar."<<endl;
        }
    }

    system("pause");
    return 0;
}
