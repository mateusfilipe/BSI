#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    int cod, quantidade;
    float precoUni, precoTot, desconto, precoFin;
    cout<<"Digite o código do produto e a quantidade comprada:"<<endl;
    cin>>cod>>quantidade;
    if(cod >= 1 && cod <= 10){
        precoUni=10;
    }else if(cod >= 11 && cod <= 20 ){
        precoUni=20;
    }else if(cod >= 21 && cod <= 30){
        precoUni=30;
    }else if(cod >= 31 && cod <= 40){
        precoUni=40;
    }else{
        cout<<"Produto inexistente."<<endl;
    }
    precoTot=precoUni*quantidade;
    if(precoTot <= 250){
        desconto=0.05;
    }else if(precoTot >= 250 && precoTot <= 500){
        desconto=0.1;
    }else if(precoTot > 500){
        desconto=0.15;
    }
    precoFin=precoTot - (precoTot*desconto);

    cout<<"Preço da nota: R$"<<precoTot<<endl;
    cout<<"Desconto de "<<desconto*100<<"%"<<endl;
    cout<<"Preço final: R$"<<precoFin<<endl;
    system("pause");
    return 0;

}
