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
#include <string>

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 3;
const int C = 3;

using namespace std;

int ack(int n , int m);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n, m;
    cin>>n>>m;
    cout<<ack(m,n)<<endl;
    system("PAUSE");
    return 0;
}
int ack(int n , int m){
    if(m == 0){
        return n+1;
    }else if(m > 0 && n == 0){
        return ack(m-1,1);
    }else if(m > 0 && n > 0){
        return ack(m-1,ack(m,n-1));
    }
}
