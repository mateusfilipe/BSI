//Mateus Filipe De Lima Souza - 1� Per�odo - BSI
/*
    Exemplos de teste com 5:
    Entrada: 1, 2, 3, 4, 5;
    Sa�da: 5, 4, 3, 2, 1;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 10;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int vetorOriginal[TAM], vetorInvertido[TAM];
    for(int i = 0 , j = TAM-1 ; i < TAM ; i++ , j--){
        cout<<"Digite a "<<i+1<<"� posi��o:"<<endl;
        cin>>vetorOriginal[i];
        vetorInvertido[j]=vetorOriginal[i];
    }
    cout<<"\nVetor Invertido: ";
    for(int i = 0 ; i < TAM ; i++){
        cout<<vetorInvertido[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}
