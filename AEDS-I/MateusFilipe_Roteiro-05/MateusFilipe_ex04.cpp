//Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste:
    Entrada: NULL ;
    Saída: 0 1 4 9 16 25 36 49 64 81;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 10;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float v[TAM];
    for(int i = 0 ; i < TAM ; i++){
        v[i]=pow(i,2);
    }
    cout<<endl;
    for(int i = 0; i < TAM ; i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n"<<endl;
    system("pause");
    return 0;
}
