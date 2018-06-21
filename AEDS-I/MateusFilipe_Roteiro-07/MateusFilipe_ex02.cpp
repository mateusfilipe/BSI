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

using namespace std;

void felizPascoa(int ano); // ASSINATURA DA SUBROTINA

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int ano;
    cout<<"Digite o ano para descobrir a data da páscoa:"<<endl;
    cin>>ano;

    felizPascoa(ano);

    system("pause");
    return 0;
}
void felizPascoa(int ano){
    int a, b, c, d, e, f, g, h, i, k, l, m, mes, dia;
    a=ano%19;
    b=ano/100;
    c=ano%100;
    d=b/4;
    e=b%4;
    f=(b+8)/25;
    g=(b-f+1)/3;
    h=(19*a+b-d-g+15)%30;
    i=c/4;
    k=c%4;
    l=(32+2*e+2*i-h-k)%7;
    m=(a+11*h+22*l)/451;
    mes=(h+l-7*m+114)/31;
    cout<<"Mês: ";
    if(mes==3){
        cout<<"Março"<<endl;
    }else if(mes==4){
        cout<<"Abril"<<endl;
    }
    dia=((h+l-7*m+114)%31)+1;
    cout<<"Dia: "<<dia<<endl;
}
