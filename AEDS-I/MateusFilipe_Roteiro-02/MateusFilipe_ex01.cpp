#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float num1, num2, num3, soma=0, media=0;
    cout<<"Digite o primeiro número:"<<endl;
    cin>>num1;
    cout<<"Digite o segundo número:"<<endl;
    cin>>num2;
    cout<<"Digite o terceiro número:"<<endl;
    cin>>num3;

    soma=num1+num2+num3;
    media=soma/3;

    cout<<"O valor da soma é: "<<soma<<"\nE o da média é: "<<media;

    return 0;

}
