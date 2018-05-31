 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{

        Origem:
        1 7
        4 0
        Resultante:
        7 49
        28 0

    }
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 2;
const int C = 2;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float mat[L][C], maior = -1000, rMat[L][C];
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            mat[i][j]=rand()%10;
            if(mat[i][j]>maior){
                maior=mat[i][j];
            }
        }
    }
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            rMat[i][j]=mat[i][j]*maior;
        }
    }
    cout<<"Origem: ";
    for(int i = 0 ; i < L ; i++){
        cout<<endl;
        for(int j = 0 ; j < C ; j++){
            cout<<mat[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"Resultante: ";
    for(int i = 0 ; i < L ; i++){
        cout<<endl;
        for(int j = 0 ; j < C ; j++){
            cout<<rMat[i][j]<<" ";
        }
    }
    cout<<endl;
    system("pause");
    return 0;
}
