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
    int vCod[TAM], codigo;
    float vSaldo[TAM],
    bool achou;
    for(int i = 0 ; i < TAM ;){
        cout<<"Cadastre o c�digo da conta:"<<endl;
        cin>>codigo;
        achou=false;
        for(int j = 0 ; j <= i ; j++){
            if(codigo==vCod[j]){
                achou=true;
                cout<<"Conta j� cadastrada"<<endl;

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
