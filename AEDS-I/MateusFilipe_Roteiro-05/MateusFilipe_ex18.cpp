 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste:
    Entrada: ;
    Saída: ;

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
    int vet[TAM], fat=1;
    for(int i = 0 ; i < TAM ; i++){
        vet[i]=1;
    }
    vet[0]=0;
    for(int i = 0 ; i < TAM ; i++){
        for(int j = i ; j > 0 ; j--){
            vet[i]*=j;
        }
    }
    for(int i = 0 ; i < TAM ; i++){
        cout<<vet[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}
