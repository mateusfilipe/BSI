#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float base, altura, area, potencia;
    cout<<"Digite o valor da base do cômodo: "<<endl;
    cin>>base;
    cout<<"Digite o valor da altura do cômodo: "<<endl;
    cin>>altura;
    area=base*altura;
    potencia=area*18;
    cout<<"O valor da área será de: "<<area<<endl;
    cout<<"A potência será de: "<<potencia<<"W"<<endl;
    return 0;


}
