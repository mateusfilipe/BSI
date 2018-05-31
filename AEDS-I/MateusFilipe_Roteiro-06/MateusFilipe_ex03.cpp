//Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{

        Digite o número de LINHAS de B: 3
        Digite o número de COLUNAS de B: 4
        A[2][3];
        Preencha A:
        1 1 1
        1 1 1

        Preencha B:
        1 1 1 1
        1 1 1 1
        1 1 1 1
        AxB :
        3 3 3 3
        3 3 3 3

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

const int L = 3;
const int C = 4;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float A[L][C], B[100][100], AB[L][100], LB, CB, s;
    cout<<"Digite o número de LINHAS de B: ";
    cin>>LB;
    cout<<"Digite o número de COLUNAS de B: ";
    cin>>CB;

    if(C==LB){
        cout<<"Preencha A:"<<endl;
        for(int i = 0 ; i < L ; i++){
            for(int j = 0 ; j < C ; j++){
                cin>>A[i][j];
                AB[i][j]=0;
            }
        }
        cout<<"\nPreencha B:"<<endl;
        for(int i = 0 ; i < LB ; i++){
            for(int j = 0 ; j < CB ; j++){
                cin>>B[i][j];
            }
        }
        for(int i = 0 ; i < L ; i++){
            for(int j = 0 ; j < CB ; j++){
                AB[i][j]=0;
                s=0;
                for(int k = 0 ; k < C ; k++){
                    s+=A[i][k]*B[k][j];
                    AB[i][j]=s;
               }
            }
        }
        cout<<"AxB : "<<endl;
        for(int i = 0 ; i < L ; i++){
            for(int j = 0 ; j < CB ; j++){
                cout<<AB[i][j]<<" ";
            }
            cout<<endl;
        }
    }else{
        cout<<"Operação Inválida!!!"<<endl;
        return 0;
    }

    system("pause");
    return 0;
}
