#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float peso, altura, imc;
    cout<<"Digite seu peso e sua altura:"<<endl;
    cin>>peso>>altura;
    imc=peso/(pow(altura,2));
    if(imc<18.5){
        cout<<"Abaixo do peso."<<endl;
    }else if(imc>=18.5 && imc<=25){
        cout<<"Peso normal."<<endl;
    }else if(imc>25 && imc<=30){
        cout<<"Acima do peso."<<endl;
    }else{
        cout<<"Obesidade."<<endl;
    }

    system("pause");
    return 0;

}
