//Mateus Filipe De Lima Souza - 1� Per�odo - BSI
/*
	Exemplo de Teste{
        Digite o tamanho da matriz: 4
        Preencha a matriz:
        1 0 0 0
        0 1 0 0
        0 0 1 0
        0 0 0 1
        � uma matriz permuta��o!
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

const int L = 0;
const int C = 0;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n;
    int mat[100][100];
    int teste=0;
    cout<<"Digite o tamanho da matriz: ";
    cin>>n;
    cout<<"Preencha a matriz: "<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>mat[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        teste=0;
        for(int j = 0 ; j < n ; j++){
            if(mat[i][j]!=0 && mat[i][j]!=1){
                cout<<"N�o � permuta��o!"<<endl;
                return 0;
            }
            if(mat[i][j]==1){
                teste++;
            }
        }
    }
    if(teste==1){
        cout<<"� uma matriz permuta��o!"<<endl;
    }else{
        cout<<"N�o � permuta��o!"<<endl;
    }
    system("pause");
    return 0;
}
