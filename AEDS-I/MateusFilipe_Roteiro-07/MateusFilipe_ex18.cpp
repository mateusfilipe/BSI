 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        7

        111
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

void dec2bin(int n){
    if(n/2!=0){
        dec2bin(n/2);
    }
    cout<<n%2;
}

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n;
    cin>>n;
    dec2bin(n);
    cout<<endl;
    system("PAUSE");
    return 0;
}
