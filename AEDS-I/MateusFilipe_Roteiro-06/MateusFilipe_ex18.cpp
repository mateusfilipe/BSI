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

const int L = 0;
const int C = 0;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n, d, x, ganhou=0;

    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>d>>x;
        if((x==(d+1)) || (x==(d+2))){
            ganhou++;
        }
    }
    if(ganhou > (n-ganhou)){
        cout<<"dario"<<endl;
    }else{
        cout<<"xerxes"<<endl;
    }


    system("PAUSE");
    return 0;
}

