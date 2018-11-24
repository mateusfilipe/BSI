//Mateus Filipe De Lima Souza - 2º Período - BSI
#include <iostream>
#include <locale.h>
#include <fstream>
#include <windows.h>
#include <string>
#include <stdio.h>
#include <cstring>

using namespace std;

struct pessoas{
    int cod;
    float base;
    string nome;
};
void npessoas(int &np, string vet0[]);
void slinhas(int np, string vet0[]);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int np;
    string vet0[100];
    ifstream arq("Pessoas.txt");
    npessoas(np,vet0);
    slinhas(np,vet0);
    s2(np,vet0);


    char* point;
    point = strtok(vet0, ",");

    system("PAUSE");
    return 0;
}
void npessoas(int &np, string vet0[]){
    ifstream arq("Pessoas.txt");
    if(arq.is_open()){
        getline(arq,vet0[0]);
        np = atoi(vet0[0].c_str());
        //cout<<"np: "<<np<<endl;
    }else{
        cout<<"Arquivo Inválido!"<<endl;
    }
}
void slinhas(int np, string vet0[]){
    ifstream arq("Pessoas.txt");
    if(arq.is_open()){
        for(int i = 0 ; i < np+1 ; i++){
            getline(arq,vet0[i]);
            //cout<<"slinhas: "<<vet0[i]<<endl;
        }
    }else{
        cout<<"Arquivo Inválido!"<<endl;
    }
}
//Pega códigos de cada linha;
void s2(int np, string vet0[]){
    ifstream arq("Pessoas.txt");
    string div = ",";
    string temp[4];
    int codes[4];

    if(arq.is_open()){
        for(int i = 0 ; i < np+1 ; i++){
            cout<<"s2: "<<vet0[i][0]<<endl;
            temp[i] = vet0[i][0];
            codes[i] = atoi(vet0[0].c_str());

        }
    }else{
        cout<<"Arquivo Inválido!"<<endl;
    }
}
