 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        1ºEXEMPLO: Mateus Souza Teteu
                   O nome possui 11 Caracteres
                   Nome =/= Apelido

        2ºEXEMPLO: Mateus Souza Mateus
                   O nome possui 11 Caracteres
                   Nome == Apelido
    }
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>
#include <string.h>

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 1;
const int C = 3;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    //DECLARANDO VARIÁVEIS{
    int nCaracteresNome=0;
    bool apeliNome = false;
    string nomeApelido[L][C];
    cout << setw(70) << setfill('=');
    cout<<"\n";
    //}
    //====================================================================================================//
    //PREENCHENDO NOME E O APELIDO{
        cout<<"Digite seu nome e no final seu apelido: "<<endl;
        for(int i = 0 ; i < L ; i++){
            for(int j = 0 ; j < C ; j++){
                cin>>nomeApelido[i][j];
            }
        }
        cout<<endl;
    //}
    //====================================================================================================//
    //CONTANDO O NÚMERO DE LETRAS DO NOME E SOBRENOME{
        for(int i = 0 ; i < L ; i++){
            for(int j = 0 ; j < C-1 ; j++){
                nCaracteresNome+=strlen(nomeApelido[i][j].c_str());
            }
        }
        cout<<nomeApelido[0][0]<<" '"<<nomeApelido[0][2]<<"' "<<nomeApelido[0][1]<<endl;
        cout<<"O nome tem: "<<nCaracteresNome<<" caracteres."<<endl;
    cout << setw(70) << setfill('=');
    cout<<"\n";
    //}
    //====================================================================================================//
    //VERIFICANDO SE O APELIDO É IGUAL AO NOME{
        if(nomeApelido[L-1][C-1]==nomeApelido[0][0]){
            apeliNome=true;
        }
        if(apeliNome==true){
            cout<<"Nome == Apelido"<<endl;
        }else{
            cout<<"Nome =/= Apelido"<<endl;
        }
    cout << setw(70) << setfill('=');
    cout<<"\n";
    //}
    //====================================================================================================//
    system("pause");
    return 0;
}
