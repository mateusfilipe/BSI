 //Mateus Filipe De Lima Souza - 1� Per�odo - BSI
/*
    Exemplos de teste 10 :
    Entrada:  1 2 3 4 5 6 7 8 9 10;
    Sa�da:  S = 121;

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
    float A[TAM], s=0;
    for(int i = 0 ; i < TAM ; i++){
        cout<<"Preencha a posi��o "<<i<<" do vetor A:"<<endl;
        cin>>A[i];
    }
    for(int i = 0 , j = TAM ; i < TAM , j > i ; i++ , j--){
        s+=(pow((A[i]-A[j]),2));
    }
    cout<<"S = "<<s<<endl;
    system("pause");
    return 0;
}
