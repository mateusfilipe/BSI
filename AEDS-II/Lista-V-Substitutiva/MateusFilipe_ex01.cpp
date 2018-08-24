//Mateus Filipe De Lima Souza - 2º Período - BSI

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <fstream>

//Vetor:

const int TAM = 100;

using namespace std;

void npessoas(int &np, string vet0[]);
void slinhas(int np, string vet0[]);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int np;
    string vet0[TAM];
    ifstream arq("Pessoas.txt");
    npessoas(np,vet0);
    slinhas(np,vet0);

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
        cout<<" - Conteúdo do arquivo:"<<endl;
        for(int i = 0 ; i < np+1 ; i++){
            getline(arq,vet0[i]);
            cout<<"  "<<vet0[i]<<endl;
        }
    }else{
        cout<<"Arquivo Inválido!"<<endl;
    }
    cout<<endl;
}
