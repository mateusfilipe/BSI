#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int a , b, i=0, sobra=0;
    cout<<"Digite os valores de A e B: "<<endl;
    cin>>a>>b;
    while(a>b){
        a=a-b;
        i++;
    }
    cout<<"Quociente = "<<i<<endl;
    cout<<"Resto da divisão = "<<a<<endl;

    system("pause");
    return 0;

}
