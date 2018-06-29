 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        3

        3
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

int fib(int k){
    if(k == 1 || k == 0){
        return 1;
    }else{
        return fib(k-1)+fib(k-2);
    }
}
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int k;
    cin>>k;
    cout<<fib(k)<<endl;
    system("PAUSE");
    return 0;
}

