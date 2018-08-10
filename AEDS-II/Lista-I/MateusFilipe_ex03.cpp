//Mateus Filipe De Lima Souza - 2º Período - BSI
/*
    Exemplo de Teste{
        Digite qualquer coisa:
        Mateus Filipe
        Digite a letra que você quer buscar:
        e
        A letra e aparece 2 vezes.
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

void procura(string x, string p);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    string x, p;
    cout<<"Digite qualquer coisa: "<<endl;
    getline(cin, x);
    cout<<"Digite a letra que você quer buscar: "<<endl;
    getline(cin, p);

    procura(x,p);

    system("pause");
    return 0;
}
void procura(string x, string p){
    int c = 0;
    for(int i = 0 ; i < x.size();i++){

        if(p[0] == x[i]){
                c++;
        }
    }
    if(c>0){
        cout<<"A letra "<<p<<" aparece "<<c<<" vezes."<<endl;
    }else{
        cout<<"Não tem a letra "<<p<<"."<<endl;
    }
}
