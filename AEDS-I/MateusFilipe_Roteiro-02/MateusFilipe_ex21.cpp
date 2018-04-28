#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, aux;
    cout<<"Digite um valor para A:"<<endl;
    cin>>a;
    cout<<"Digite um valor para B:"<<endl;
    cin>>b;
    aux=a;
    a=b;
    b=aux;
    cout<<"O valor trocado de A: "<<a<<endl;
    cout<<"O valor trocado de B: "<<b<<endl;
    return 0;


}
