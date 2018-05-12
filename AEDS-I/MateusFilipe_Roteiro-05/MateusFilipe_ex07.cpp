 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste com 5:
    Entrada: 1 2 3 4 5;
    Saída:
            Frequencia Absoluta:
            Nota 0: 0
            Nota 1: 1
            Nota 2: 1
            Nota 3: 1
            Nota 4: 1
            Nota 5: 1
            Nota 6: 0
            Nota 7: 0
            Nota 8: 0
            Nota 9: 0
            Nota 10: 0

            Frequencia Relativa:
            Nota 0: 0%
            Nota 1: 20%
            Nota 2: 20%
            Nota 3: 20%
            Nota 4: 20%
            Nota 5: 20%
            Nota 6: 0%
            Nota 7: 0%
            Nota 8: 0%
            Nota 9: 0%
            Nota 10: 0%
        ;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 80;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    int notas[TAM], FA[11];
    float FR[11];

    for(int i = 0 ; i < 11 ; i++){
        FA[i]=0;
        FR[i]=0;
    }

    for(int i = 0 ; i < TAM ; i++){
        cout<<"Digite a nota: "<<endl;
        cin>>notas[i];
        FA[notas[i]]++;
        FR[notas[i]]=(float(FA[notas[i]])/TAM)*100;


    }

    cout<<"Frequencia Absoluta: "<<endl;
    for(int i = 0 ; i < 11 ; i++){
        cout<<"Nota "<<i<<": "<<FA[i]<<endl;
    }
    cout<<endl;
    cout<<"Frequencia Relativa: "<<endl;
    for(int i = 0 ; i < 11 ; i++){
        cout<<"Nota "<<i<<": "<<FR[i]<<"% "<<endl;
    }
    cout<<endl;

    system("pause");
    return 0;
}
