#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float base, altura, area, potencia;
    cout<<"Digite o valor da base do c�modo: "<<endl;
    cin>>base;
    cout<<"Digite o valor da altura do c�modo: "<<endl;
    cin>>altura;
    area=base*altura;
    potencia=area*18;
    cout<<"O valor da �rea ser� de: "<<area<<endl;
    cout<<"A pot�ncia ser� de: "<<potencia<<"W"<<endl;
    return 0;


}
