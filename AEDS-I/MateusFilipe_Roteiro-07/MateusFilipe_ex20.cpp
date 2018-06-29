 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        2
        2

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

int comb(int n , int k){
    if(k == 1){
        return n;
    }else if(k == n){
        return 1;
    }else{
        return comb(n-1, k-1)+comb(n-1,k);
    }
}

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n , k;
    cin>>n>>k;
    cout<<comb(n,k)<<endl;

    system("PAUSE");
    return 0;
}

