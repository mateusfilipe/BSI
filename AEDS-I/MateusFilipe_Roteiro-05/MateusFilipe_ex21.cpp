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
    int vCod[TAM], codigo;
    float vSaldo[TAM],
    bool achou;
    for(int i = 0 ; i < TAM ;){
        cout<<"Cadastre o código da conta:"<<endl;
        cin>>codigo;
        achou=false;
        for(int j = 0 ; j <= i ; j++){
            if(codigo==vCod[j]){
                achou=true;
                cout<<"Conta já cadastrada"<<endl;

                break;
                //j=i;
            }
        }
        if(achou==false){
            vCod[i]=codigo;
            cout<<"Digite o saldo da conta:"<<endl;
            cin>>vSaldo[i];
             i++;
        }
    }


    system("pause");
    return 0;
}
