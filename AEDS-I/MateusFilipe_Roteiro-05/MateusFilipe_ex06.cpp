 //Mateus Filipe De Lima Souza - 1� Per�odo - BSI
/*
    Exemplos de teste:
    Entrada: 5
             1 2 3 4 5 ;
    Sa�da:
        Conjunto 1: 2 / 4 /
        Conjunto 2: 1 / 3 / 5 /;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 0;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n, vet[101], vetC1[101], vetC2[101];
    cout<<"Digite quantos n�meros inteiros ser�o utilizados(*<=100*): "<<endl;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cout<<"Digite "<<i+1<<"� n�mero: "<<endl;
        cin>>vet[i];
        if(vet[i]>0 && vet[i]%2==0 ){
                cout<<"ded";
            vetC1[i]=vet[i];
        }
        if(vet[i]%2!=0 || vet[i]<0){
            vetC2[i]=vet[i];
        }
    }
    cout<<"Conjunto 1: ";
    for(int i = 0 ; i < n ; i++){
        if(vetC1[i]==vet[i]){
            cout<<vetC1[i]<<" / ";
        }
    }
    cout<<endl;
    cout<<"Conjunto 2: ";
    for(int i = 0 ; i < n ; i++){
        if(vetC2[i]==vet[i]){
            cout<<vetC2[i]<<" / ";
        }
    }


    system("pause");
    return 0;
}
