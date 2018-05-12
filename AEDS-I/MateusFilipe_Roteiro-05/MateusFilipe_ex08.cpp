 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste com 5:
    Entrada: 1 2 3 4 5
             1 2 5 4 5;
    Saída:   1 1 0 1 1;

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
    float vet1[TAM], vet2[TAM], vet3[TAM];
    for(int i = 0 ; i < TAM ; i++){
        cout<<"Preencha a posição "<<i+1<<" do PRIMEIRO vetor:"<<endl;
        cin>>vet1[i];
    }
    for(int i = 0 ; i < TAM ; i++){
        cout<<"Preencha a posição "<<i+1<<" do SEGUNDO vetor:"<<endl;
        cin>>vet2[i];
    }

    for(int i = 0 ; i < TAM ; i++){
        if(vet1[i]==vet2[i]){
            vet3[i]=1;
        }else{
            vet3[i]=0;
        }
    }
    cout<<"Vetor 3 : [ ";
    for(int i = 0 ; i < TAM ; i++){
        cout<<vet3[i]<<" ";
    }
    cout<<" ]"<<endl;

    system("pause");
    return 0;
}
