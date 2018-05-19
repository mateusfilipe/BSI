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

const int TAM = 20;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float soma = 0, amostras[TAM], s = 0, media, somaT = 0;
    for(int i = 0 ; i < TAM; i++){
        //cout<<"Quantos ml tem a lata "<<i+1<<" ?"<<endl;
        //cin>>amostras[i];
        amostras[i]=380+rand()%19;
        soma+=amostras[i];
        //cout<<amostras[i]<<endl;
    }
    media=soma/TAM;
    for(int i = 0 ; i< TAM ; i++){
        somaT+=pow((amostras[i]-media),2);
    }
    s=sqrt(somaT/TAM-1);
    cout<<"Média : "<<media<<endl;
    cout<<"Desvio Padrão: "<<s<<endl;
    cout<<endl;
    if(s!=5){
        cout<<"O processo deve ser revisado!"<<endl;
    }else{
        cout<<"Nada de errado com o processo!"<<endl;
    }
    cout<<endl;
    system("pause");
    return 0;
}
