//Mateus Filipe De Lima Souza - 2º Período - BSI
#include <iostream>
#include <locale.h>
#include <fstream>
#include <windows.h>
#include <string>
#include <stdio.h>
#include <cstring>
#include <cstdlib>

using namespace std;

int TAM;
int *codigo;
float *base_calculo;
string *nome;
int i = 0;

void novaPessoa(char *dados);
void lerArquivo(char *nomeArquivo);
void gravarArquivo();
void imprimirVetor();

int main()
{
    setlocale(LC_ALL , " ");

    lerArquivo("Pessoas.txt");
    imprimirVetor();
    gravarArquivo();

    system("PAUSE");
    return 0;
}
void lerArquivo(char *nomeArquivo){
    const int MAX = 80;
    char linhas[MAX];
    ifstream  ler(nomeArquivo);
    ler.getline(linhas,MAX);
    TAM = atoi(linhas);
    codigo = new int[TAM];
    base_calculo = new float[TAM];
    nome = new string[TAM];
    while(!ler.eof()){
        ler.getline(linhas,MAX);
        novaPessoa(linhas);
        i++;
    }
}
void novaPessoa(char *dados){
    char *ch = strtok(dados, ",");
    codigo[i] = atoi(ch);

    ch = strtok(NULL, ",");
    base_calculo[i] = atof(ch);

    ch = strtok(NULL, ",");
    string str(ch);
    nome[i] = str;
}
void imprimirVetor(){
    for(int i = 0 ; i < TAM ; i++){
        cout<<codigo[i]<<"\t";
        cout<<base_calculo[i]<<"\t";
        cout<<nome[i]<<endl;
    }
}
void gravarArquivo(){
    ofstream saida;
    saida.open("Salarios.txt");
    for(int i = 0 ; i < TAM ; i++){
        saida << "Código:"<<codigo[i];
        saida << ", Nome: "<<nome[i];
        saida << ", Salário:"<<base_calculo[i]*954;
        saida <<"\n";
    }
}
