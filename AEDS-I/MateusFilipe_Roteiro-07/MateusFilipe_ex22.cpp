 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        40
        50

        10
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

int mdc(int x, int y){
    if(y == 0){
        return x;
    }else{
        return mdc(y, x%y);
    }
}

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int x, y;
    cin>>x>>y;
    cout<<mdc(x,y)<<endl;

    system("PAUSE");
    return 0;
}

