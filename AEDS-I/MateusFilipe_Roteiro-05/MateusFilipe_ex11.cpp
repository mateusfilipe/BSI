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
    int v1[TAM], v2[TAM], v3[2*TAM];
    for(int i = 0; i < 2*TAM ; i++){
        v1[i]=rand()%10;
        v2[i]=rand()%10;
        v3[i]=0;
    }
    for(int z = 0 , i = 0 , j = 1  ; i < TAM , j < TAM , z < TAM ; z++, i+=2 , j+=2){
        v3[i]=v1[z];
        v3[j]=v2[z];
    }
    cout<<"V1 = [ ";
    for(int i = 0 ; i < TAM ; i++){
        cout<<v1[i]<<" ";
    }
    cout<<"]\n";
    cout<<"V2 = [ ";
    for(int i = 0 ; i < TAM ; i++){
        cout<<v2[i]<<" ";
    }
    cout<<"]\n";
    cout<<"V3 = [ ";
    for(int i = 0 ; i < 2*TAM ; i ++){
        cout<<v3[i]<<" ";
    }
    cout<<"]\n";

    system("pause");
    return 0;
}
