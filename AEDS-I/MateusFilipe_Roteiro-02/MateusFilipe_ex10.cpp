#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, conta1, conta2, salarioRestante;
    cout<<"Digite o sal�rio: "<<endl;
    cin>>salario;
    cout<<"Digite o valor da 1� conta: "<<endl;
    cin>>conta1;
    cout<<"Digite o valor da 2� conta: "<<endl;
    cin>>conta2;

    salarioRestante = salario - ((conta1 + conta1*0.02)+(conta2 + conta2*0.02));
    cout<<"Sobrar� do sal�rio R$"<<salarioRestante;

    return 0;


}
