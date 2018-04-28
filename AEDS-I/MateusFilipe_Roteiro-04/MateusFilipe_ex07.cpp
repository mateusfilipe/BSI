#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    string nCidade[5], maiorAcidentes, menorAcidentes;
    float nVeiculo[5], nAcidentes[5], maior=-100000, menor=100000, razao[5], soma=0, media;
    float media200, i200=0, soma200=0;
    for(int i = 0 ; i < 5 ; i++){
        cout<<"Digite o nome da "<<i+1<<"º cidade:"<<endl;
        cin>>nCidade[i];
        cout<<"Digite o número de veículos dessa cidade:"<<endl;
        cin>>nVeiculo[i];
        cout<<"Agora digite o número de acidentes dessa cidade:"<<endl;
        cin>>nAcidentes[i];
        razao[i]=nVeiculo[i]/nAcidentes[i];
        soma+=nVeiculo[i];

        if(nAcidentes[i]>maior){
            maior=nAcidentes[i];
            maiorAcidentes=nCidade[i];
        }
        if(nAcidentes[i]<menor){
            menor=nAcidentes[i];
            menorAcidentes=nCidade[i];
        }
        if(nVeiculo[i]<200){
            soma200+=nAcidentes[i];
            i200++;
        }
    }
    media=soma/5;
    media200=soma200/i200;
    cout<<"Maior número de acidentes: "<<maior<<" em "<<maiorAcidentes<<endl;
    cout<<"Menor número de acidentes: "<<menor<<" em "<<menorAcidentes<<endl;
    cout<<"A média de veículos nas 5 cidades é: "<<media<<endl;
    cout<<"A média de acidentes nas cidades com menos de 200 veículos é: "<<media200<<endl;

    system("pause");
    return 0;

}
