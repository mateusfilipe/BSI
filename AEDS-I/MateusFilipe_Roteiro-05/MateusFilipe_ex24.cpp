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

const int TAM = 0;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n, vert[100], hori[100], cont=0, aux=0;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        vert[i]=i+1;
    }
    for(int i = 0 ; i < n ; i++){
        cin>>hori[i];
    }
    for(int i = 0 ; i < n ; i++){
            if(vert[i]!=hori[i]){
                aux=vert[i];
                vert[i]=hori[i];
                hori[i]=aux;
                cont++;
            }

    }
    cout<<cont<<endl;
    system("pause");
    return 0;
    /*
    N�o consegui resolver, mas
    a l�gica �:
    O tanto de vezes que voc� trabalha
    os n�meros de lugares, � de vezes
    nas quais v�o se cruzar.
    No caso de, 1 5 3 4 6 2
    O dois teve sua posi��o alterada
    4 vezes, o 5 � trocado de lugar com o 4
    e o 3 � trocado de lugar com o 5, assim
    mais 2 altera��es.
    4 vezes do dois
   +1 vez do 5 com o 4
   +1 vez do 5 com o 3
   ____________________
   =6 altera��es totais
    */
}
