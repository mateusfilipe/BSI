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
    cout<<"Digite um n�mero:"<<endl;
    cin>>n;
    auxiliar=n;
    while (auxiliar != 0) {
        inverso = inverso * 10 + auxiliar % 10;
        auxiliar = auxiliar / 10;
    }

    if (inverso == n){
        cout<<"� pal�ndromo!"<<endl;
    }else{
        cout<<"N�o � pal�ndromo"<<endl;
    }

  return 0;

    system("pause");
    return 0;

}
