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
void s1(int np, string vet0[]);
void s2(int np, string vet0[]);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int np;
    string vet0[4];
    ifstream arq("Pessoas.txt");
    npessoas(np,vet0);
    s1(np,vet0);
    s2(np,vet0);

    //cout<<np<<endl;
    system("PAUSE");
    return 0;
}
void npessoas(int &np, string vet0[]){
    ifstream arq("Pessoas.txt");
    if(arq.is_open()){
        getline(arq,vet0[0]);
        np = atoi(vet0[0].c_str());
    }else{
        cout<<"Arquivo Inválido!"<<endl;
    }
}
void s1(int np, string vet0[]){
    ifstream arq("Pessoas.txt");
    if(arq.is_open()){
        for(int i = 0 ; i < np+1 ; i++){
            getline(arq,vet0[i]);
            //cout<<"s1: "<<vet0[i]<<endl;
        }
    }else{
        cout<<"Arquivo Inválido!"<<endl;
    }
}
void s2(int np, string vet0[]){
    ifstream arq("Pessoas.txt");
    string div = ",";

    if(arq.is_open()){
        for(int i = 0 ; i < np+1 ; i++){

        }
    }else{
        cout<<"Arquivo Inválido!"<<endl;
    }
}
