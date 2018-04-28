#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float num1, num2, num3, multi, div;
    cout<<"Digite o primeiro número:"<<endl;
    cin>>num1;
    cout<<"Digite o segundo número:"<<endl;
    cin>>num2;
    cout<<"Digite o terceiro número:"<<endl;
    cin>>num3;

    multi=num1*num2;
    div=multi/num3;

    cout<<"O resultado é: "<<div<<endl;

    return 0;

}
