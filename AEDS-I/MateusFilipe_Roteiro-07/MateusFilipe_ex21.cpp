 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        3
        6

        509
    }
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>
#include <string>

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 3;
const int C = 3;

using namespace std;

int ack(int m , int n){
    int x;
    if(m == 0){
        return n+1;
    }
    if(m > 0 && n == 0){
        return ack(m-1,1);
    }
    if(m > 0 && n > 0){
        x=ack(m,n-1);
        return ack(m-1,x);
    }
}

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n, m;
    cin>>m>>n;
    cout<<ack(m,n)<<endl;
    system("PAUSE");
    return 0;
}
