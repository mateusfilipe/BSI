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
    float altura, pIdeal;
    cout<<"Digiteo seu sexo(F = Feminino / M = Masculino):"<<endl;
    cin>>sexo;
    cout<<"Digite sua altura: "<<endl;
    cin>>altura;
    if(sexo=='M'){
        pIdeal=(72.7*altura)-58;
        cout<<"Peso ideal: "<<pIdeal<<"Kg"<<endl;
    }else if(sexo=='F'){
        pIdeal=(62.1*altura)-44.7;
        cout<<"Peso ideal: "<<pIdeal<<"Kg"<<endl;
    }

    system("pause");
    return 0;

}
