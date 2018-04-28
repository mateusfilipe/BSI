#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;
    cout<<"Digite um número: "<<endl;
    cin>>numero;
    if(numero%2==0)
    {
        cout<<"O número é par!"<<endl;
    }
    else
    {
        cout<<"O número é ímpar!"<<endl;
    }

    system("pause");
    return 0;

}
