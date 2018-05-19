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

const int TAM = 2;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int vCod[TAM], codigo, rep;
    float vSaldo[TAM], deposito, saque;
    bool achou;
    int op;
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
    do{
        cout<<"==============="<<endl;
        cout<<"1-Efetura Depósito"<<endl;
        cout<<"2-Efetura Saque"<<endl;
        cout<<"3-Consultar saldo em conta"<<endl;
        cout<<"4-Finalizar o programa"<<endl;
        cin>>op;
                switch(op){
                    case 1:
                        cout<<"Em qual conta deseja realizar essa operação?"<<endl;
                        cin>>rep;
                        for(int i = 0 ; i < TAM ; i++){
                            if(rep==vCod[i]){
                                cout<<"Quanto deseja depositar?"<<endl;
                                cin>>deposito;
                                vSaldo[i]+=deposito;
                            }
                        }
                        break;
                   case 2:
                        cout<<"Em qual conta deseja realizar essa operação?"<<endl;
                        cin>>rep;
                        for(int i = 0 ; i < TAM ; i++){
                            if(rep==vCod[i]){
                                cout<<"Quanto deseja sacar?"<<endl;
                                cin>>saque;
                                if(saque>vSaldo[i]){
                                    cout<<"Saldo Insuficiente"<<endl;
                                }else{
                                    vSaldo[i]-=saque;
                                }
                            }
                        }
                        break;
                    case 3:
                        cout<<"Em qual conta deseja realizar essa operação?"<<endl;
                        cin>>rep;
                        for(int i = 0 ; i < TAM ; i++){
                            if(rep==vCod[i]){
                                cout<<"Saldo = R$"<<vSaldo[i]<<endl;
                            }
                        }
                        break;
                    case 4:
                        return 0;
                        break;
                    default:
                        cout<<"Operação inexistente."<<endl;
                        break;
                    }
    }while(op!=4);


    system("pause");
    return 0;
}
