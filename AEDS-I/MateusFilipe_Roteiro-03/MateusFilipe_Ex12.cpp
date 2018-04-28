#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float idade;
    cout<<"Digite sua idade: "<<endl;
    cin>>idade;
    if(idade>=5 && idade<=7){
        cout<<"Infantil."<<endl;
    }else if(idade>=8 && idade<=10){
        cout<<"Juvenil."<<endl;
    }else if(idade>=11 && idade<=15){
        cout<<"Adolescente."<<endl;
    }else if(idade>=16 && idade<=40){
        cout<<"Adulto."<<endl;
    }else if(idade>40){
        cout<<"Sênior."<<endl;
    }

    system("pause");
    return 0;

}
