#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salarioMin, kWattGasto, valorkW, contakW, contaDesconto;
    cout<<"Qual é o valor do salário mínimo atualmente?"<<endl;
    cin>>salarioMin;
    cout<<"Quanto foi gasto de quilowatt?"<<endl;
    cin>>kWattGasto;

    valorkW=salarioMin/5;
    contakW=kWattGasto*valorkW;
    contaDesconto=contakW - (contakW*0.15);

    cout<<"O quilowatt está: "<<valorkW<<endl;
    cout<<"O valor da conta será: "<<contakW<<endl;
    cout<<"O valor da conta com desconto: "<<contaDesconto;



    return 0;


}
