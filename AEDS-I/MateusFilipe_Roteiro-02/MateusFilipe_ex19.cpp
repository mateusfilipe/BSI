#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float horasTrab, salarioMin, horasExtra, salarioNorm, salarioExtra, salarioFinal;
    cout<<"Digite o salário mínimo: "<<endl;
    cin>>salarioMin;
    cout<<"Digite as horas trabalhadas: "<<endl;
    cin>>horasTrab;
    cout<<"Digite as horas extra: "<<endl;
    cin>>horasExtra;

    salarioNorm=horasTrab*(0.125*salarioMin);
    salarioExtra=horasExtra*(0.25*salarioMin);
    salarioFinal=salarioExtra+salarioNorm;
    cout<<"O salário final será de "<<salarioFinal;

    return 0;


}
