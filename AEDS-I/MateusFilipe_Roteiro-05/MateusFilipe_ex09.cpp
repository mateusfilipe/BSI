 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste:
    Entrada: 1.56 ;
    Saída: ;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 50;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float altura[TAM], sexo[TAM], maior=-1000, menor=1000, soma=0, media=0, abMedia[TAM], ab=0;
    float maiorH[TAM], menorH[TAM], maiorM[TAM], menorM[TAM], somaH=0, somaM=0, mediaH=0, mediaM=0, h=0, m=0;

    for(int i = 0 ; i < TAM ; i++){
        maiorM[i]=0;
        menorH[i]=0;
        abMedia[i]=0;
    }

    for(int i = 0 ; i < TAM ; i++){
        cout<<"Digite a altura do aluno e o sexo(1 = M / 2 = F) do aluno "<<i<<endl;
        cin>>altura[i]>>sexo[i];
        if(altura[i]>maior){
            maior=altura[i];
        }
        if(altura[i]<menor){
            menor=altura[i];
        }
        soma+=altura[i];
        if(sexo[i]==2){
            somaM+=altura[i];
            m++;
        }if(sexo[i]==1){
            somaH+=altura[i];
            h++;
        }
    }

    media=soma/TAM;
    mediaM=somaM/m;
    mediaH=somaH/h;
    h=0;
    m=0;
    for(int i = 0 ; i < TAM ; i++){
        if(sexo[i]==2){
            if(altura[i]>mediaH){
                maiorM[i]=altura[i];
            }else{
                menorM[i]=altura[i];
            }
        }
        if(sexo[i]==1){
            if(altura[i]>mediaM){
                maiorH[i]=altura[i];
            }else{
                menorH[i]=altura[i];
            }
        }
        if(altura[i]<media){
            abMedia[i]=altura[i];
            ab++;
        }
    }
        cout<<"Maior: | "<<maior<<" |"<<endl;
        cout<<"Menor: | "<<menor<<" |"<<endl;
        cout<<"Mulheres acima da média dos homens: | ";
    for(int i = 0 ; i < TAM ; i++){
        if(maiorM[i]>0)
            cout<<maiorM[i]<<" | ";
    }
        cout<<endl;
    cout<<"Homens abaixo da média das mulheres: | ";
    for(int i = 0 ; i < TAM ; i++){
        if(menorH[i]>0)
            cout<<menorH[i]<<" | ";
    }
        cout<<endl;
    cout<<"Pessoa abaixo da média geral: | ";
    for(int i = 0 ; i < ab ; i++){
        cout<<abMedia[i]<<" | ";
    }
        cout<<endl;
    system("pause");
    return 0;
}
