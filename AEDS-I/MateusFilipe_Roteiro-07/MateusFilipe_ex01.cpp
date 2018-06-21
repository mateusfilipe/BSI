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
#include <iomanip>

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 3;
const int C = 3;

void descobreMes(int mes); //ASSINATURA DA SUBROTINA

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int mes;
    cout<<"Digite o número que deseja descobrir o mês:"<<endl;
    cin>>mes;

    descobreMes(mes);

    system("pause");
    return 0;
}
void descobreMes(int mes){
    if(mes==1){
        cout<<"Janeiro"<<endl;
    }else if(mes==2){
        cout<<"Fevereiro"<<endl;
    }else if(mes==3){
        cout<<"Março"<<endl;
    }else if(mes==4){
        cout<<"Abril"<<endl;
    }else if(mes==5){
        cout<<"Maio"<<endl;
    }else if(mes==6){
        cout<<"Junho"<<endl;
    }else if(mes==7){
        cout<<"Julho"<<endl;
    }else if(mes==8){
        cout<<"Agosto"<<endl;
    }else if(mes==9){
        cout<<"Setembro"<<endl;
    }else if(mes==10){
        cout<<"Outubro"<<endl;
    }else if(mes==11){
        cout<<"Novembro"<<endl;
    }else if(mes==12){
        cout<<"Dezembro"<<endl;
    }else{
        cout<<"*ENTRADA INVÁLIDA*"<<endl;
    }
}
