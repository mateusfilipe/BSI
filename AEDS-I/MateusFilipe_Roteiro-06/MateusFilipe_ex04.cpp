 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        Quantas semanas serão analisadas? 2
            SEMANA = 1
            DIA = 1
            1
            SEMANA = 1
            DIA = 2
            2
            SEMANA = 1
            DIA = 3
            3
            SEMANA = 1
            DIA = 4
            4
            SEMANA = 1
            DIA = 5
            5
            SEMANA = 1
            DIA = 6
            6
            SEMANA = 1
            DIA = 7
            7
            ======================
            SEMANA = 2
            DIA = 1
            1
            SEMANA = 2
            DIA = 2
            2
            SEMANA = 2
            DIA = 3
            3
            SEMANA = 2
            DIA = 4
            4
            SEMANA = 2
            DIA = 5
            5
            SEMANA = 2
            DIA = 6
            6
            SEMANA = 2
            DIA = 7
            7
            ======================
            Média: 4
            Produção acima da média: 6
            Menor dia: 1 da Semana: 1
            Menor dia: 1 da Semana: 2
    }
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 100;
const int C = 7;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float prod[100][C], media, s=0, n;
    int aciM=0, menor[100], semanaMenor[100];
    for(int i = 0 ; i < 100 ; i++){
        menor[i]=1000;
        semanaMenor[i]=0;
    }
    cout<<"Quantas semanas serão analisadas? ";
    cin>>n;
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < C ; j++){
            cout<<"SEMANA = "<<i+1<<endl;
            cout<<"DIA = "<<j+1<<endl;
            cin>>prod[i][j];
            s+=prod[i][j];
        }
        cout<<"======================"<<endl;
    }
    media=s/(n*7);
    cout<<"Média: "<<media<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < C; j++){
            if(prod[i][j]>media){
                aciM++;
            }
            if(prod[i][j]<menor[i]){
                menor[i]=prod[i][j];
                semanaMenor[i]=i+1;
            }
        }
    }
    cout<<"Produção acima da média: "<<aciM<<endl;
    for(int i = 0 ; i < n ; i++){
       cout<<"Menor dia: "<<menor[i]<<" da Semana: "<<semanaMenor[i]<<endl;
    }
    cout<<endl;
    system("pause");
    return 0;
}
