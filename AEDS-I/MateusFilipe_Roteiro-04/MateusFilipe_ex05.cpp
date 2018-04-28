#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    string nomes[10], nomeMaior, nomeMenor;
    double nota[10], soma=0, media=0, maior=-10000, menor=10000;

    for(int i = 0 ; i < 10 ; i++)
    {
        cout<<"Nota do "<<i+1<<"º aluno e a nome desse aluno "<<endl;
        cin>>nota[i];
        fflush(stdin);
        getline(cin,nomes[i]);


        soma+=nota[i];

        if(nota[i]>maior)
        {
            maior=nota[i];
            nomeMaior=nomes[i];
        }

        if(nota[i]<=menor)
        {
            menor=nota[i];
            nomeMenor=nomes[i];
        }

    }


    media=soma/10;

    cout<<"Soma: "<<soma<<endl;
    cout<<"Média: "<<media<<endl;
    cout<<"Maior Nota: "<<maior<<" de "<<nomeMaior<<endl;
    cout<<"Menor Nota: "<<menor<<" de "<<nomeMenor<<endl;


    system("pause");
    return 0;

}
