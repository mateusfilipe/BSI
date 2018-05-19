 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste:
    Entrada: - ;
    Saída: ;

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

    int v[TAM], cont=1, a=0;

    for(int i = 0 ; i < TAM ; i++){
        v[i]=0;
    }
    for(int i = 100 ; i < 150 ; i++){
        //cout<<"----------------------"<<endl;
        cont=0;
        for(int j = 1 ; j <= i ; j++){
            if(i%j==0){
                //cout<<i<<"/"<<cont<<endl;
                cont++;
            }
        }
        for(int k = 1 ; k < 2 ; k++){
            if(cont==2){
                v[k]=i;
                if(v[k]!=v[k+1]){
                    cout<<v[k]<<" ";
                }
            }

        }
    }

    cout<<endl;
    system("pause");
    return 0;
}
