#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;
    cout<<"Digite um n�mero: "<<endl;
    cin>>numero;
    if(numero%2==0)
    {
        cout<<"O n�mero � par!"<<endl;
    }
    else
    {
        cout<<"O n�mero � �mpar!"<<endl;
    }

    system("pause");
    return 0;

}
