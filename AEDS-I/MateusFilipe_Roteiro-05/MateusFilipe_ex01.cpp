//Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste com 5:
    Entrada: 10, 16, 40, 20, 5;
    Saída: 3, 2, , 2, 1;
        <=16: 3;
        > 16: 2/
        Média: 18,2;
        Mais novo: 5;
        Mais velho: 40;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 40;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float a=0, b=0, media = 0, soma = 0, maisNovo=1000, maisVelho=-1000;
    int idade[TAM];
    for(int i = 0 ; i < TAM ; i++){
        cout<<"Digite a idade do "<<i+1<<"º aluno."<<endl;
        cin>>idade[i];
        //idade[i]=rand()%100;
        if(idade[i]<=16){
           a++;
        }else if(idade[i]>=16){
            b++;
        }

        soma+=idade[i];

        if(idade[i]<maisNovo){
            maisNovo=idade[i];
        }
        if(idade[i]>maisVelho){
            maisVelho=idade[i];
        }

    }
    media=soma/TAM;
    cout<<"Alunos com menos de 16 anos: "<<a<<endl;
    cout<<"Alunos com maiss de 16 anos: "<<b<<endl;
    cout<<"Média das idades: "<<media<<endl;
    cout<<"Aluno mais novo: "<<maisNovo<<endl;
    cout<<"Aluno mais velho: "<<maisVelho<<endl;

    system("pause");
    return 0;
}
