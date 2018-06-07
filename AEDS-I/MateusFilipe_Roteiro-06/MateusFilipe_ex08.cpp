//Mateus Filipe De Lima Souza - 1º Período - BSI
/*
	Exemplo de Teste{
        Digite o tamanho da matriz: 4
        Preencha a matriz:
        1 0 0 0
        0 1 0 0
        0 0 1 0
        0 0 0 1
        É uma matriz permutação!
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
    int testeLinha=0, testeColuna=0;
    cout<<"Digite o tamanho da matriz: ";
    cin>>n;
    cout<<"Preencha a matriz: "<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>mat[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(mat[i][j]!=0 && mat[i][j]!=1){
                cout<<"Matriz inválida!"<<endl;
                return 0;
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        testeLinha=0;
        for(int j = 0 ; j < n ; j++){
            if(mat[i][j]==1){
                testeLinha++;
                if(testeLinha>1)
                {
                    break;
                }
            }
        }
    }
    for(int j = 0 ; j < n ; j++){
        testeColuna=0;
        for(int i = 0 ; i < n ; i++){
            if(mat[i][j]==1){
                testeColuna++;
                if(testeLinha>1)
                {
                    break;
                }
            }
        }
    }
    if(testeLinha == 1 and testeColuna ==1){
        cout<<"É uma permutação!"<<endl;
    }
    else{
        cout<<"Não é permutação!"<<endl;
    }
    system("pause");
    return 0;
}
