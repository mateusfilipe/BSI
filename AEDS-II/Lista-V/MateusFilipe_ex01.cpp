//Mateus Filipe De Lima Souza - 2� Per�odo - BSI

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

const int TAM = 80;

struct pessoas{
    int cod;
    float base;
    string nome;
};

void preenche(int &np, pessoas vet[]){
    cout<<"Digite o n�mero de pessoas: "<<endl;
    cin>>np;
    for(int i = 0 ; i < np ; i++){
        cout<<"Digite o c�digo, base e nome da "<<i+1<<"� pessoa:"<<endl;
        cin>>vet[i].cod;
        cin>>vet[i].base;
        cin>>vet[i].nome;

    }
}
void salvarquivo(int &np, pessoas vet[]);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    ofstream fout("Pessoas.txt");
    int np;
    pessoas vet[TAM];

    preenche(np,vet);
    salvarquivo(np,vet);

    system("PAUSE");
    return 0;
}
void salvarquivo(int &np, pessoas vet[]){
        ofstream fout("Pessoas.txt");

    int i = 0;
    while(i != np){
        fout<<vet[i].cod<<",  ";
        fout<<vet[i].base<<",  ";
        fout<<vet[i].nome<<",  ";
        fout<<endl;
        i++;
    }
}

