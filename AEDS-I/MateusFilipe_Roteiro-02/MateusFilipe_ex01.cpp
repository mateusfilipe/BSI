#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float num1, num2, num3, soma=0, media=0;
    cout<<"Digite o primeiro n�mero:"<<endl;
    cin>>num1;
    cout<<"Digite o segundo n�mero:"<<endl;
    cin>>num2;
    cout<<"Digite o terceiro n�mero:"<<endl;
    cin>>num3;

    soma=num1+num2+num3;
    media=soma/3;

    cout<<"O valor da soma �: "<<soma<<"\nE o da m�dia �: "<<media;

    return 0;

}
