#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    char sexo;
    int n, idade;
    float peso=0, altura, maisalto=-1000, soma=0;
    cout<<"Digite o número de pessoas: "<<endl;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cout<<"Digite o sexo: (F=feminino / M=masculino)"<<endl;
        cin>>sexo;
        cout<<"Digite a idade:"<<endl;
        cin>>idade;
        cout<<"Digite a altura:"<<endl;
        cin>>altura;
        cout<<"Digite o peso:"<<endl;
        cin>>peso;
        if(sexo == 'F' && idade>30){
            soma=soma+peso;
        }
        if(sexo == 'M'){
            if(altura>maisalto){
                maisalto=altura;
            }
        }
    }
    cout<<"Soma do peso: "<<soma<<endl;
    cout<<"Homem mais alto: "<<maisalto<<endl;
    system("pause");
    return 0;

}
