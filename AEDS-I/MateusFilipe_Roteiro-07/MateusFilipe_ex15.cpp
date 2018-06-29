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

void menu(){
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
}
void cadastrarPlanta(string nome[TAM], int nPlantas[TAM], int cod[TAM]);
void retiraPlanta(int nPlantas[TAM], int cod[TAM]);
void inserindoPlanta(int nPlantas[TAM], int cod[TAM]);
void printPlantas(int nPlantas[TAM], int cod[TAM], string nome[TAM]);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int cod[TAM], nPlantas[TAM];
    string nome[TAM];
    int op;
    do{
        menu();
        cin>>op;
        switch(op){
            case 1:
                cadastrarPlanta(nome, nPlantas, cod);
            break;
            case 2:
                retiraPlanta(nPlantas, cod);
            break;
            case 3:
                inserindoPlanta(nPlantas, cod);
            break;
            case 4:
                printPlantas(nPlantas,  cod, nome);
            break;
        }
    }while(op!=5);
    system("PAUSE");
    return 0;
}
void cadastrarPlanta(string nome[TAM], int nPlantas[TAM], int cod[TAM]){
    cout << setw(70) << setfill('=');
    cout<<"\n";
    cout<<"Cadastre plantas: "<<endl;
    cout<<"Código | Nome"<<endl;
    for(int i = 0 ; i < TAM ; i++){
        cin>>cod[i]>>nome[i];
        nPlantas[i]=0;
    }
}
void retiraPlanta(int nPlantas[TAM], int cod[TAM]){
    int codRetirada;
    int nRetirada;
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
}
void inserindoPlanta(int nPlantas[TAM], int cod[TAM]){
    int codInserida, nInserida;
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
}
void printPlantas(int nPlantas[TAM], int cod[TAM], string nome[TAM]){
    cout << setw(70) << setfill('=');
    cout<<"\n";
    cout<<"Código | Nome | Quantidade"<<endl;
    for(int i = 0 ; i < TAM ; i++){
        cout<<cod[i]<<"|"<<nome[i]<<"|"<<nPlantas[i]<<endl;
    }
}
