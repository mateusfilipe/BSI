 //Mateus Filipe De Lima Souza - 1� Per�odo - BSI
/*
    Exemplos de teste:
    Entrada: ;
    Sa�da: ;

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
        cout<<"Preencha o vetor na posi��o "<<i<<": ";
        cin>>vet[i];
    }
    for(int i = 0 ; i < TAM ; i++){
        soma+=vet[i];
        prod*=vet[i];
    }
    cout<<endl;
    cout<<"Produt�rio: "<<prod<<endl;
    cout<<"Somat�rio: "<<soma<<endl;
    system("pause");
    return 0;
}
