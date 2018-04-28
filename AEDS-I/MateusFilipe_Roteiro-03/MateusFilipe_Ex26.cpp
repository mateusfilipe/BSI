#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salarioBruto, salarioLiquido, tempoS,grat, imposto;
    cout<<"Digite o seu sal�rio bruto: "<<endl;
    cin>>salarioBruto;
    cout<<"Digite o tempo de servi�o(em anos): "<<endl;
    cin>>tempoS;

    if(salarioBruto<200)
    {
        cout<<"Isento de imposto."<<endl;
        imposto=0;
    }
    else if(salarioBruto>=200 && salarioBruto<=450)
    {
        imposto=0.03;
    }
    else if(salarioBruto>450 && salarioBruto<700)
    {
        imposto=0.08;
    }
    else
    {
        imposto=0.12;
    }
    if(salarioBruto > 500)
    {
        if(tempoS<=3)
        {
            grat=0.20;
        }
        else
        {
            grat=0.30;
        }
    }
    else
    {
        if(tempoS<=3)
        {
            grat=0.23;
        }
        else if(tempoS>3 && tempoS<6)
        {
            grat=0.35;
        }
        else
        {
            grat=0.33;
        }
    }
    salarioLiquido=salarioBruto-(salarioBruto*imposto) + (salarioBruto*grat);
    cout<<"Salario bruto: R$"<<salarioBruto<<endl;
    cout<<"Imposto: "<<imposto*100<<"%"<<endl;
    cout<<"Gratifica��o: "<<grat*100<<endl;
    cout<<"Salario liqu�do: R$"<<salarioLiquido<<endl;
    if(salarioLiquido<=350)
    {
        cout<<"Classifica��o: A"<<endl;
    }
    else if(salarioLiquido>350 && salarioLiquido<600)
    {
        cout<<"Classifica��o: B"<<endl;
    }
    else
    {
        cout<<"Classifica��o: C"<<endl;
    }

    system("pause");
    return 0;

}
