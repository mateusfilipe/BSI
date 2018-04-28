#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    long long n, auxiliar, inverso=0;
    cout<<"Digite um número:"<<endl;
    cin>>n;
    auxiliar=n;
    while (auxiliar != 0) {
        inverso = inverso * 10 + auxiliar % 10;
        auxiliar = auxiliar / 10;
    }

    if (inverso == n){
        cout<<"É palíndromo!"<<endl;
    }else{
        cout<<"Não é palíndromo"<<endl;
    }

  return 0;

    system("pause");
    return 0;

}
