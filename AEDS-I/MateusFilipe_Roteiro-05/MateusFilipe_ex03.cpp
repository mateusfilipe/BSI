//Mateus Filipe De Lima Souza - 1� Per�odo - BSI
/*
    Exemplos de teste:
    Entrada: 5;
    Sa�da: 1 1 2 3 5;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 5;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n, vFib[100];
    cout<<"Digite at� quanto deve ir a sequ�ncia de Fibonacci: "<<endl;
    cin>>n;
    vFib[0]=1;
    for(int i = 0 ; i < n ; i++){
        vFib[i+1]=vFib[i]+vFib[i-1];
    }
    for(int i = 0 ; i < n ; i++){
        cout<<vFib[i]<<" ";
    }
    cout<<endl;

    system("pause");
    return 0;
}
