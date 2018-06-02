//Mateus Filipe De Lima Souza - 1º Período - BSI
/*
	Exemplo de Teste com 3{
        Preencha a matriz:
        1 0 0
        0 1 0
        0 0 1
        É simétrica!
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

const int L = 8;
const int C = 8;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float a[L][C];
    int teste=0;
    cout<<"Preencha a matriz:"<<endl;
    for(int i = 0 ; i < L ; i++){
        for(int j = 0; j < C; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0 ; i < L ; i++){
        for(int j = 0; j < C; j++){
            if(a[i][j]!=a[j][i]){
                teste++;
            }
        }
    }
    if(teste!=0){
        cout<<"Não é simétrica!"<<endl;
    }else{
        cout<<"É simétrica!"<<endl;
    }
    system("pause");
    return 0;
}
