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

    int a[101], b[101], c[201], NA, NB;
    cout<<"Digite NA: "<<endl;
    cin>>NA;
    cout<<"Digite NB: "<<endl;
    cin>>NB;

    for(int i = 0 ; i < 201 ; i++){
        c[i]=0;
    }

    for(int i = 0 ; i < NA ; i++){
        cout<<"Preencha o vetor A na posi��o "<<i<<" : "<<endl;
        cin>>a[i];
    }
    cout<<"==========================="<<endl;
    for(int i = 0 ; i < NB ; i++){
        cout<<"Preencha o vetor B na posi��o "<<i<<" : "<<endl;
        cin>>b[i];
    }
    for(int z = 0 , i = 0 , j = 1  ; i < NA+NB , j < NA+NB , z < NA+NB ; z++, i+=2 , j+=2){
        c[i]=a[z];
        c[j]=b[z];
    }
    cout<<"C[ ";
    for(int i = 0 ; i < NA+NB ; i++){
        cout<<c[i]<<" ";
    }
    cout<<"]"<<endl;
    system("pause");
    return 0;
}
