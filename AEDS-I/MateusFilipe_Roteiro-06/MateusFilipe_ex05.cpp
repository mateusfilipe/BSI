//Mateus Filipe De Lima Souza - 1º Período - BSI
/*
	Exemplo de Teste{
        Foram utilizados 3 alunos com 2 provas para cada;

        Digite o nome do aluno 0 : Mateus
        Digite o nome do aluno 1 : Filipe
        Digite o nome do aluno 2 : Lima
        ==========
        Digite a nota do aluno 0 na prova 0 : 10
        Digite a nota do aluno 0 na prova 1 : 8
        ==========
        Digite a nota do aluno 1 na prova 0 : 5
        Digite a nota do aluno 1 na prova 1 : 7
        ==========
        Digite a nota do aluno 2 na prova 0 : 1
        Digite a nota do aluno 2 na prova 1 : 2
        ==========
        SITUAÇÃO / NOME
        APROVADO - Mateus
        EXAME ESPECIAL - Filipe
        REPROVADO - Lima
	}
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 10;
const int C = 5;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float notas[L][C], media[L], s[L];
    string nomes[L];
    for(int i = 0 ; i < L ; i++){
        s[i]=0;
    }
    for(int i = 0 ; i < L ; i++){
        cout<<"Digite o nome do aluno "<<i<<" : ";
        cin>>nomes[i];

    }
    cout<<"=========="<<endl;
    for(int  i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            cout<<"Digite a nota do aluno "<<i;
            cout<<" na prova "<<j<<" : ";
            cin>>notas[i][j];
            s[i]+=notas[i][j];
        }
        cout<<"=========="<<endl;
    }
    cout<<"SITUAÇÃO - NOME "<<endl;
    for(int i = 0 ; i < L ; i++){
        media[i]=s[i]/C;
        if(media[i]>=7){
            cout<<"APROVADO - "<<nomes[i];
            cout<<endl;
        }
        if(media[i]<=4){
            cout<<"REPROVADO - "<<nomes[i];
            cout<<endl;
        }
        if(media[i]>4 && media[i]<7){
            cout<<"EXAME ESPECIAL - "<<nomes[i];
            cout<<endl;
        }
    }


    system("pause");
    return 0;
}
