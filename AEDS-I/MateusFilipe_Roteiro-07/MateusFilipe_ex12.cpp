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
#include <string>

//Vetor:

const int TAM = 5;

//Matriz:

const int L = 3;
const int C = 3;

using namespace std;

bool verifica(float v[TAM], float k);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float v[TAM], k = false;
    for(int i = 0 ; i < TAM ; i++){
        cin>>v[i];
    }
    cin>>k;
    if(verifica(v, k)==1)
        cout<<k<<" está no vetor"<<endl;
    else
        cout<<k<<" não está no vetor"<<endl;


    system("PAUSE");
    return 0;
}
bool verifica(float v[TAM], float k){
    bool b;
    for(int i = 0 ; i < TAM ; i++){
        if(v[i]==k){
            b=true;
        }
    }
    return b;
}
