#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float numero;
    cout<<"Digite um n�mero: "<<endl;
    cin>>numero;
    if(numero<0)
    {
        cout<<"O n�mero digitado � negativo!"<<endl;
    }
    else
    {
        cout<<"O n�mero digitado � positivo!"<<endl;
    }

    system("pause");
    return 0;

}
