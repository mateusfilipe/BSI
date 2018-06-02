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

//Vetor:

const int TAM = 100;

//Matriz:

const int L = 100;
const int C = 100;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int vetor[TAM], ncidades, ntrajeto;
    float matriz[L][C], preco=0;
    cout<<"Digite o número de cidades: ";
    cin>>ncidades;
    for(int i = 0 ; i < ncidades ; i++){
        for(int j = 0 ; j < ncidades ; j++){
            if(i==j){
                matriz[i][j]=0;
            }else{
                cout<<"Digite o preço do trajeto de: "<<endl;
                cout<<"CIDADE "<<i<<" -> CIDADE "<<j<<endl;
                cin>>matriz[i][j];
            }
        }
    }
    cout<<"Digite por quantas cidades será feito o trajeto: ";
    cin>>ntrajeto;
    cout<<"Digite o trajeto: "<<endl;
    for(int i = 0 ; i < ntrajeto ; i++){
        cin>>vetor[i];
    }
    for(int i = 0 ; i < ntrajeto ; i++){
        preco+=matriz[vetor[i]][vetor[i+1]];
    }
    cout<<"O custo de transpote dessa rota é: "<<preco<<endl;
    system("pause");
    return 0;
}
