 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{

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

const int L = 2;
const int C = 3;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float s[L] , media[L] , revisada;
    float desvio[L], amo[L][C], somatorio[L];
    for(int i = 0 ; i < L ; i++){
        s[i]=0;
        desvio[i]=0;
        somatorio[i]=0;
        cout<<"==================================="<<endl;
        cout<<"\tLINHA DE PRODUÇÃO "<<i<<"\n"<<endl;
        for(int j = 0 ; j < C ; j++){
            cout<<"Amostra - "<<j<<" : ";
            cin>>amo[i][j];
            s[i]+=amo[i][j];
        }
        media[i]=s[i]/C;
    }
    cout<<"==================================="<<endl;
    cout<<"\tMÉDIAS\n"<<endl;
    for(int i = 0 ; i < L ; i++){
        cout<<"LINHA "<<i<<" = "<<media[i]<<endl;
        somatorio[i]+=pow((s[i]-media[i]),2);
        desvio[i]=sqrt(somatorio[i]/(C-1));
    }
    cout<<"==================================="<<endl;
    cout<<"\tDESVIO PADRÃO\n"<<endl;
    for(int i = 0 ; i < L ; i++){
        cout<<"LINHA "<<i<<" = "<<desvio[i]<<endl;
    }
    cout<<endl;
    system("pause");
    return 0;
}
