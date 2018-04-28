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
    float n, h=0;
    cout<<"Digite até quanto deseja fazer a operação:"<<endl;
    cin>>n;
    for(float i = 1; i<=n; i++){
        h+=(1/i);
    }
    cout<<"Resultado: "<<h<<endl;

    system("pause");
    return 0;

}
