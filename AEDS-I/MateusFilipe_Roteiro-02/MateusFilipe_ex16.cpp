#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    double numeroReal, parteInteira, parteFracionaria;
    cout<<"Digite um número real: "<<endl;
    cin>>numeroReal;
    parteInteira=floor(numeroReal);
    parteFracionaria=numeroReal-parteInteira;
    cout<<"Parte inteira: "<<parteInteira<<endl;
    cout<<"Parte fracionária: "<<parteFracionaria<<endl;

    return 0;


}
