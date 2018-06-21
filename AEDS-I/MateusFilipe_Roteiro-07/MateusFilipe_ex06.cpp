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

int fat(int n); // SUBROTINA QUE CALCULA O FATORIAL;

int main()
{
    int n, r;
    cin>>n;
    if(n<0){
        return -1;
    }
    r=fat(n);
    cout<<r<<endl;

    system("pause");
    return 0;
}
int fat(int n){
    int f = 1;
    for(int i = n ; i > 0 ; i--){
        f*=i;
    }
    return f;
}
