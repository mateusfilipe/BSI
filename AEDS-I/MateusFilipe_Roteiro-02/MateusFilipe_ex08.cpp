#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int nLados, nDiagonais;
    cout<<"Digite o número de lados do polígono: "<<endl;
    cin>>nLados;

    nDiagonais=nLados*(nLados-3)/2;

    cout<<"O número de diagonais será: "<<nDiagonais;


    return 0;


}
