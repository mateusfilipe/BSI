#include <iostream>
#include <locale.h>

#define pi 3.1416
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio, circ;
    cout<<"Digite o valor do raio: "<<endl;
    cin>>raio;
    circ=2*pi*raio;
    cout<<"A circunferência será de "<<circ;

    return 0;


}
