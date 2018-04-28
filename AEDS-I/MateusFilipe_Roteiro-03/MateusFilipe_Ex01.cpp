#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float numero;
    cout<<"Digite um número: "<<endl;
    cin>>numero;
    if(numero<0)
    {
        cout<<"O número digitado é negativo!"<<endl;
    }
    else
    {
        cout<<"O número digitado é positivo!"<<endl;
    }

    system("pause");
    return 0;

}
