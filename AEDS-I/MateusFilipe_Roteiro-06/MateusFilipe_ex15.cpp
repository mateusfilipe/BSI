 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        =====================================================================
        Digite o número de vendas de cada manicure:
        (0)Unhas dos pés = R$10,00
        (1)Unhas das mãos = R$15,00
        (2)Serviços de Podologia = R$30,00

        0|1|2

        3 3 2
        2 2 1
        0 1 0
        0 3 2
        2 2 1
        =====================================================================
                Faturamento de cada manicure:
        Manicure 0 : 67.5
        Manicure 1 : 40
        Manicure 2 : 7.5
        Manicure 3 : 52.5
        Manicure 4 : 40
        =====================================================================
    }
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>

//Vetor:

const int TAM = 5;

//Matriz:

const int L = 5;
const int C = 3;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    //DECLARAÇÃO DE VARIÁVEIS{
        float faturamento[TAM], tabela[L][C], tp;
        int tp0, tp1, tp2;
        float preco[C];
        preco[0]=10;
        preco[1]=15;
        preco[2]=30;

    cout << setw(70) << setfill('=');
    cout<<"\n";
    //}
    //====================================================================================================//
    //PREENCHENDO A MATRIZ TABELA[][]{
        cout<<"\tDigite o número de vendas de cada manicure:"<<endl;
        cout<<"(0)Unhas dos pés = R$10,00\n";
        cout<<"(1)Unhas das mãos = R$15,00\n";
        cout<<"(2)Serviços de Podologia = R$30,00\n";
        cout<<"\n0|1|2"<<endl;
        for(int i = 0 ; i < L ; i++){
            for(int j = 0 ; j < C ; j++){
                cin>>tabela[i][j];
            }
        }
        for(int i = 0 ; i < L ; i++){
            faturamento[i]=0;
        }
    cout << setw(70) << setfill('=');
    cout<<"\n";
    //}
    //====================================================================================================//
    //CALCULANDO O FATURAMENTO{
        for(int j = 0 ; j < C ; j++){
            for(int i = 0 ; i < L ; i++){
                faturamento[i]+=(tabela[i][j]*preco[j]);
            }
        }

        cout<<"\tFaturamento de cada manicure:"<<endl;
        for(int i = 0 ; i < TAM ; i++){
            cout<<"Manicure "<<i<<" : "<<faturamento[i]/2<<endl;
        }
    cout << setw(70) << setfill('=');
    cout<<"\n";
    //}
    //====================================================================================================//

    system("pause");
    return 0;
}
