 //Mateus Filipe De Lima Souza - 1� Per�odo - BSI
/*
    Exemplos de teste:
    Entrada: ;
    Sa�da: ;

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
    float v[TAM], vCres[TAM], vInvC[TAM], aux;
    for(int i = 0 ; i < TAM ; i++){
        vCres[i]=0;
        vInvC[i]=0;
    }
    for(int i = 0 ; i < TAM ; i++){
        cout<<"Preencha o vetor na posi��o "<<i<<endl;
        cin>>v[i];
    }
    for(int i = 0 ; i < TAM ; i++){
        for(int j = 0; j < TAM ; j++){
            if(v[i]<v[j]){
                aux=v[i];
                v[i]=v[j];
                vCres[i]=v[j];
                v[j]=aux;
                vCres[j]=aux;
            }
         }
    }
    for(int i = 0 , j = TAM-1 ; i < TAM ; i++ , j--){
        vInvC[i]=vCres[j];
    }

    cout<<"vetor Crescente = [";
    for(int i = 0 ; i < TAM ; i++){
        cout<<vCres[i]<<" ";
    }
    cout<<"]"<<endl;
    cout<<"vetor Invertido = [";
    for(int i = 0 ; i < TAM ; i++){
        cout<<vInvC[i]<<" ";
    }
    cout<<"]"<<endl;

    system("pause");
    return 0;
}
