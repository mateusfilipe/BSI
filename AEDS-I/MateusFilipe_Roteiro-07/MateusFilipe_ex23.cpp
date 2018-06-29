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

int fat(int n){
    if(n == 1){
        return 1;
    }else{
        return n*fat(n-1);
    }
}

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n;
    cin>>n;
    cout<<fat(n)<<endl;
    system("PAUSE");
    return 0;
}

