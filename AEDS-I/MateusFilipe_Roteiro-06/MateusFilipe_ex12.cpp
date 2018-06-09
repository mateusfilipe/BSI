 //Mateus Filipe De Lima Souza - 1� Per�odo - BSI
/*
    Exemplo de Teste{
        5 5 4
        3 3 3
        2 3 2
        1 1 1
        1 2 3
    }
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 5;
const int C = 3;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    //DECLARA��O DE VARI�VEIS{
        float estoque[L][C], maiorCustoRec=-1000, maiorCusto;
        int qItens[C], maiEstoqueP2, menEstoqueRec=1000;
        int menorEstoque;
        cout << setw(70) << setfill('=');
        cout<<"\n";
    //}
    //====================================================================================================//
    //PREENCHENDO A MATRIZ ESTOQUE[][]{
        cout<<"Preencha o Estoque:"<<endl;
        cout<<"Onde a �ltima linha dever� ser ";
        cout<<"o custo da estocagem de cada item."<<endl;
        for(int i = 0 ; i < L ; i++){
            for(int j = 0 ; j < C ; j++){
                cin>>estoque[i][j];
                qItens[j]=0;
            }

        }
        cout << setw(70) << setfill('=');
        cout<<"\n";
    //}
    //====================================================================================================//
    //QUANTIFICANDO OS ITENS ARMAZENADOS EM CADA ARMAZ�M{
        for(int i = 0 ; i < L-1 ; i++){
            for(int j = 0 ; j < C ; j++){
                qItens[j]+=estoque[i][j];
            }
        }

        cout << setw(21) << setfill(' ');
        cout<<"Armaz�m: ";
        cout << setw(10) << setfill(' ');
        cout<<"[ 00 01 02 ]"<<endl;
        cout<<"Quantidade de itens: [ ";
        for(int i = 0 ; i < C ; i++){
            cout<<qItens[i]<<" ";
        }
        cout<<"]"<<endl;
        cout << setw(70) << setfill('=');
        cout<<"\n";

    //}
    //====================================================================================================//
    //DESCOBRINDO QUAL ARMAZEM TEM O MAIOR qItens[2]{
        for(int i = 0 ; i < C ; i++){
            if(qItens[i]>qItens[i+1]){
                maiEstoqueP2=i;
            }
        }
        cout<<"Armaz�m [0"<<maiEstoqueP2<<"] tem maior estoque de 2."<<endl;
        cout << setw(70) << setfill('=');
        cout<<"\n";
    //}
    //====================================================================================================//
    //DESCOBRINDO QUAL ARMAZEM TEM O MENOR ESTOQUE{
        for(int i = 0 ; i < C ; i++){
            if(qItens[i]<menEstoqueRec){
                menEstoqueRec=qItens[i];
                menorEstoque=i;
            }
        }
        cout<<"Armaz�m [0"<<menorEstoque<<"] tem o menor estoque."<<endl;
        cout << setw(70) << setfill('=');
        cout<<"\n";
    //}
    //====================================================================================================//
    //DESCOBRINDO QUAL ARMAZEM TEM O MARIO CUSTO DE ESTOCAGEM{
        for(int i = L ; i <= L ; i++){
            for(int j = 0 ; j < C ; j++){
                if(estoque[i][j]>maiorCustoRec){
                    maiorCustoRec=estoque[i][j];
                    maiorCusto=j;
                }
            }
        }
        cout<<"Armaz�m [0"<<maiorCusto<<"] tem maior custo de estocagem."<<endl;
        cout << setw(70) << setfill('=');
        cout<<"\n";
    //}
    //====================================================================================================//

    system("pause");
    return 0;
}
