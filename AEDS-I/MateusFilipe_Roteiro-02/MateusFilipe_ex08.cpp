#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int nLados, nDiagonais;
    cout<<"Digite o n�mero de lados do pol�gono: "<<endl;
    cin>>nLados;

    nDiagonais=nLados*(nLados-3)/2;

    cout<<"O n�mero de diagonais ser�: "<<nDiagonais;


    return 0;


}
