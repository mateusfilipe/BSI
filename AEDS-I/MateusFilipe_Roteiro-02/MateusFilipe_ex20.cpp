#include <iostream>
#include <locale.h>
#include <math.h>
#define pi 3.1416

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    double angulo, hParede, medidaEscada, anguloRadiano;
    cout<<"Digite o valor do �ngulo: "<<endl;
    cin>>angulo;
    cout<<"Digite a altura da parede: "<<endl;
    cin>>hParede;
    anguloRadiano=(pi*angulo)/180;
    medidaEscada=hParede/sin(anguloRadiano);

    cout<<"A medida da escada ser�: "<<medidaEscada<<endl;
    return 0;



}
