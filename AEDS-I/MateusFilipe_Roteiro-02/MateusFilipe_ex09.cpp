#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float resultado;
    //Os valores foram fornecidos no enunciado
    resultado=2000*pow((1+0.005),24);
    cout<<"O resultado será: "<<resultado;

    return 0;


}
