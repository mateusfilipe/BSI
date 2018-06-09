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

//Vetor:

const int TAM = 2;

//Matriz:

const int L = 12;
const int C = 4;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    //DECLARAÇÃO DE VARIÁVEIS/ZERANDO LUGARES[][]{
    int lugares[L][C], L1, C1;
    char op;
        for(int i = 0 ; i < L ; i++){
            for(int j = 0 ; j < C ; j++){
                lugares[i][j]=0;
            }
        }
    //}
    //====================================================================================================//
    //IMPRIMINDO O MENU{
    do{
    cout << setw(70) << setfill('=');
    cout<<"\n";
        cout<<"\t      MARIAS UNIDAS"<<endl;
    cout << setw(70) << setfill('=');
    cout<<"\n";
        cout<<"a. Vender passagem"<<endl;
        cout<<"b. Mostrar mapa de ocupação do ônibus"<<endl;
        cout<<"c. Encerrar"<<endl;
        cout<<"\nDigite a opção desejada: ";
        cin>>op;
	cout << setw(70) << setfill('=');
    cout<<"\n";
    //}
    //====================================================================================================//
    //VERIFICANDO SE EXISTE POLTRONA DISPONÍVEL PARA VENDA{
            switch(op){
                case 'a':
                    cout<<"Digite as coordenadas das poltronas que foram vendidas(Linha/Coluna): "<<endl;
                    cin>>L1>>C1;
                    for(int i = L1 ; i <= L1 ; i++){
                            for(int j = C1 ; j <= C1 ; j++){
                                if(lugares[L1][C1]!=1){
                                    lugares[L1][C1]=1;
                                    cout<<"Venda efetivada"<<endl;
                                    break;
                                }else if(lugares[L1][C1]==1){
                                    cout<<"Poltrona ocupada"<<endl;
                                    break;
                                }
                            }
                    }

                break;

    //}
    //====================================================================================================//
    //MOSTRAR O MAPA DE OCUPAÇÃO DO ÔNIBUS{
                case 'b':
                    cout<<"\t     Mapa de ocupação"<<endl;
                    cout<<"\t0\t1\t2\t3"<<endl;
                    cout << setw(70) << setfill('=');
                    cout<<"\n";
                    for(int i = 0 ; i < L ; i++){
                        for(int j = 0 ; j < C ; j++){
                            cout<<"\t"<<lugares[i][j]<<" ";
                        }
                        cout<<endl;
                    }
                break;
            }
    }while(op!='c');
    //}
    //====================================================================================================//
    system("pause");
    return 0;
}
