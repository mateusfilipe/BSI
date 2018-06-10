//Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        =====================================================================
            FLORICULTURA MARIASFLOR
        =====================================================================
        1. CADASTRAR NOVA PLANTA
        2. RETIRAR PLANTA
        3. INSERIR PLANTA
        4. IMPRIMIR RELATÓRIO
        5. SAIR

        Digite a opção desejada:
        1
        =====================================================================
        Cadastre plantas:
        Código | Nome
        0 a
        1 b
        2 c
        3 d
        4 e
        =====================================================================
                FLORICULTURA MARIASFLOR
        =====================================================================
        1. CADASTRAR NOVA PLANTA
        2. RETIRAR PLANTA
        3. INSERIR PLANTA
        4. IMPRIMIR RELATÓRIO
        5. SAIR

        Digite a opção desejada:
        3
        =====================================================================
        Digite qual planta deseja inserir:
        0
        Agora digite quantas plantas serão codInseridas:
        5
        =====================================================================
        Código | Nome | Quantidade
        0|a|5
        1|b|0
        2|c|0
        3|d|0
        4|e|0
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

const int TAM = 5;

//Matriz:

const int L = 3;
const int C = 3;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    //DECLARAÇÃO DE VARIÁVEIS{
    int cod[TAM], nPlantas[TAM];
    int codRetirada, nRetirada;
    int codInserida, nInserida;
    string nome[TAM];
    int op;

    //}
    //====================================================================================================//
    //IMPRIMINDO O MENU{
    do{
    cout << setw(70) << setfill('=');
    cout<<"\n";
        cout<<"\tFLORICULTURA MARIASFLOR"<<endl;
    cout << setw(70) << setfill('=');
    cout<<"\n";
        cout<<"1. CADASTRAR NOVA PLANTA"<<endl;
        cout<<"2. RETIRAR PLANTA"<<endl;
        cout<<"3. INSERIR PLANTA"<<endl;
        cout<<"4. IMPRIMIR RELATÓRIO"<<endl;
        cout<<"5. SAIR"<<endl;
        cout<<"\nDigite a opção desejada:"<<endl;
        cin>>op;

    //}
    //====================================================================================================//
    //CADASTRANDO NOVA PLANTA{
        switch (op){
            case 1:
                cout << setw(70) << setfill('=');
                cout<<"\n";
                cout<<"Cadastre plantas: "<<endl;
                cout<<"Código | Nome"<<endl;
                for(int i = 0 ; i < TAM ; i++){
                    cin>>cod[i]>>nome[i];
                    nPlantas[i]=0;
                }
            break;
    cout << setw(70) << setfill('=');
    cout<<"\n";
    //}
    //====================================================================================================//
    //RETIRANDO UMA PLANTA{
            case 2:
                cout << setw(70) << setfill('=');
                cout<<"\n";
                cout<<"Digite o código da planta a ser codRetirada:"<<endl;
                cin>>codRetirada;
                cout<<"Agora digite quantas serão codRetiradas:"<<endl;
                cin>>nRetirada;
                for(int i = 0 ; i < TAM ; i++){
                    if(nPlantas[i]>=nRetirada){
                        if(cod[i]==codRetirada){
                            nPlantas[i]-=nRetirada;
                        }
                    }else{
                        cout<<"Sem plantas suficientes."<<endl;
                        break;
                    }
                }

            break;
    //}
    //====================================================================================================//
    //INSERINDO UMA PLANTA{
            case 3:
                cout << setw(70) << setfill('=');
                cout<<"\n";
                cout<<"Digite qual planta deseja inserir: "<<endl;
                cin>>codInserida;
                cout<<"Agora digite quantas plantas serão codInseridas:"<<endl;
                cin>>nInserida;
                for(int i = 0 ; i < TAM ; i++){
                    if(cod[i]==codInserida){
                            nPlantas[i]+=nInserida;
                    }
                }

    //}
    //====================================================================================================//
    //IMPRIMINDO RELÁTÓRIO DE PLANTAS{
            case 4:
                cout << setw(70) << setfill('=');
                cout<<"\n";
                cout<<"Código | Nome | Quantidade"<<endl;
                for(int i = 0 ; i < TAM ; i++){
                    cout<<cod[i]<<"|"<<nome[i]<<"|"<<nPlantas[i]<<endl;
                }
            break;
        }//FECHA O SWITCH;
    }while(op!=5);
    cout << setw(70) << setfill('=');
    cout<<"\n";
    //}
    //====================================================================================================//

    system("PAUSE");
    return 0;
}
