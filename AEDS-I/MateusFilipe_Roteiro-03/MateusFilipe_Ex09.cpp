#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float anoDoCarro, precoDoCarro, imposto;
    cout<<"Digite o ano do carro e em seguida o valor dele: "<<endl;
    cin>>anoDoCarro>>precoDoCarro;
    if(anoDoCarro<1990){
        imposto = precoDoCarro * 0.01;
    }else{
        imposto = precoDoCarro * 0.15;
    }
    cout<<"O imposto a ser pago deverá ser de: "<<imposto<<endl;


    system("pause");
    return 0;

}
