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

const int TAM = 0;

//Matriz:

const int L = 3;
const int C = 3;

using namespace std;

void cabecalho(string nome); // ASSINATURA DA STRING

int main()
{
    setlocale(LC_ALL , "Portuguese");
    string nome;
    cout<<"Digite o nome:"<<endl;
    getline(cin,nome);
    cabecalho(nome);

    system("pause");
    return 0;
}
void cabecalho(string nome){
    string n;
    n = nome;
    cout<<"============================================"<<endl;
    cout<<"IFMG – Instituto Federal de Minas Gerais"<<endl;
    cout<<"Campus Sabará"<<endl;
    cout<<"Disciplina de Laboratório de Programação"<<endl;
    cout<<"Nome: "<<n<<endl;
    cout<<"============================================"<<endl;

}
