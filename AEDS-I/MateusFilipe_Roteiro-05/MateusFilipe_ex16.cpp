 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste:
    Entrada: ;
    Saída: ;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 5;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float vet[TAM], soma=0, prod=1;
    for(int i = 0 ; i < TAM ; i++){
        cout<<"Preencha o vetor na posição "<<i<<": ";
        cin>>vet[i];
    }
    for(int i = 0 ; i < TAM ; i++){
        soma+=vet[i];
        prod*=vet[i];
    }
    cout<<endl;
    cout<<"Produtório: "<<prod<<endl;
    cout<<"Somatório: "<<soma<<endl;
    system("pause");
    return 0;
}
