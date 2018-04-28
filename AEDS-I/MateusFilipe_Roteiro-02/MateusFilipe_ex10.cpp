#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, conta1, conta2, salarioRestante;
    cout<<"Digite o salário: "<<endl;
    cin>>salario;
    cout<<"Digite o valor da 1º conta: "<<endl;
    cin>>conta1;
    cout<<"Digite o valor da 2º conta: "<<endl;
    cin>>conta2;

    salarioRestante = salario - ((conta1 + conta1*0.02)+(conta2 + conta2*0.02));
    cout<<"Sobrará do salário R$"<<salarioRestante;

    return 0;


}
