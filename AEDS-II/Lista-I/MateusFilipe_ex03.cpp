//Mateus Filipe De Lima Souza - 2º Período - BSI
/*
    Exemplo de Teste{
        Digite qualquer coisa:
        Mateus Filipe
        Digite a letra que você quer buscar:
        t
        Tem a letra t
    }
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>

//Vetor:

const int TAM = 1000;

using namespace std;



int main()
{
    setlocale(LC_ALL , "Portuguese");
    string x, p;
    int c = 0;
    cout<<"Digite qualquer coisa: "<<endl;
    getline(cin, x);
    cout<<"Digite a letra que você quer buscar: "<<endl;
    getline(cin, p);
    for(int i = 0 ; i < x.size();i++){
        if(p[0] == x[i]){
            c++;
        }
    }
    if(c>0){
        cout<<"Tem a letra "<<p<<endl;
    }else{
        cout<<"Não tem a letra "<<p<<endl;
    }
    system("pause");
    return 0;
}

