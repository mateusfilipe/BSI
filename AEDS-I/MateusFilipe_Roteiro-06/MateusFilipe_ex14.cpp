 //Mateus Filipe De Lima Souza - 1� Per�odo - BSI
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
    //DECLARA��O DE VARI�VEIS/ZERANDO LUGARES[][]{
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
        cout<<"b. Mostrar mapa de ocupa��o do �nibus"<<endl;
        cout<<"c. Encerrar"<<endl;
        cout<<"\nDigite a op��o desejada: ";
        cin>>op;
	cout << setw(70) << setfill('=');
    cout<<"\n";
    //}
    //====================================================================================================//
    //VERIFICANDO SE EXISTE POLTRONA DISPON�VEL PARA VENDA{
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
    //MOSTRAR O MAPA DE OCUPA��O DO �NIBUS{
                case 'b':
                    cout<<"\t     Mapa de ocupa��o"<<endl;
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
