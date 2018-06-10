 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        0 1 1 0 1
        1 0 0 1 0
        1 0 0 0 0
        0 1 0 0 1
        1 0 0 1 0
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

const int L = 5;
const int C = 5;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    //DECLARAÇÃO DE VARIÁVEIS{
    int amigos[L][C], nAmizades[L];
	cout << setw(70) << setfill('=');
    cout<<"\n";
    //}
    //====================================================================================================//
    //PREENCHENDO A MATRIZ AMIGOS{
        cout<<"Preencha as amizades: "<<endl;
        cout<<"0 - Não são amigos \n1 - São amigos"<<endl;
        for(int i = 0 ; i < L ; i++){
            for(int j = 0 ; j < C ; j++){
                //if(j==i){
                    //amigos[i][j]=0;
                //}
                cin>>amigos[i][j];
                nAmizades[j]=0;
            }
        }
	cout << setw(70) << setfill('=');
    cout<<"\n";
    //}
    //====================================================================================================//
    //CONTANDO A QUANTIDADE DE AMIGOS{
        cout<<"Número de amigos: "<<endl;
        for(int i = 0 ; i < L ; i++){
            for(int j = 0 ; j < C ; j++){
                if(amigos[i][j]==1){
                    nAmizades[j]++;
                }
            }
        }
        for(int i = 0 ; i < L ; i++){
            cout<<"n"<<i<<" tem "<<nAmizades[i]<<" amizades."<<endl;
        }
	cout << setw(70) << setfill('=');
    cout<<"\n";
    //}
    //====================================================================================================//

    system("PAUSE");
    return 0;
}

