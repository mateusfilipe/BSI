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
    Não consegui resolver, mas
    a lógica é:
    O tanto de vezes que você trabalha
    os números de lugares, é de vezes
    nas quais vão se cruzar.
    No caso de, 1 5 3 4 6 2
    O dois teve sua posição alterada
    4 vezes, o 5 é trocado de lugar com o 4
    e o 3 é trocado de lugar com o 5, assim
    mais 2 alterações.
    4 vezes do dois
   +1 vez do 5 com o 4
   +1 vez do 5 com o 3
   ____________________
   =6 alterações totais
    */
}
