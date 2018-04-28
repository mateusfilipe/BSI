#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float salariobruto, salariograt, salariofinal;
    cout<<"Digite o salário bruto:"<<endl;
    cin>>salariobruto;
    salariograt = salariobruto + (salariobruto * 0.1);
    salariofinal = salariograt - (salariograt * 0.05);
    cout<<"O salário final será de: "<<salariofinal;

    return 0;


}
