#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float base, altura, area, perimetro;
    cout<<"Digite o valor da base: "<<endl;
    cin>>base;
    cout<<"Digite o valor da altura: "<<endl;
    cin>>altura;

    area = base*altura;
    perimetro = (2*base)+(2*altura);

    cout<<"A área equivale a: "<<area<<". E o perímetro: "<<perimetro<<endl;

    return 0;


}
