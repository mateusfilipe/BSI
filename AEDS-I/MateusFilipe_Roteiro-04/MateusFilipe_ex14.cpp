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
    float n, h=0,aux1=0, aux2=0;
    cout<<"Digite até quanto deseja fazer a operação:"<<endl;
    cin>>n;
    for(int i = 1; i<=n; i++){

        if(i%2==0){
            aux1-=(1.0/i);
        }
        if(i%2!=0){
            aux2+=(1.0/i);

        }
    }
    cout<<"Resultado: "<<aux1+aux2<<endl;
    system("pause");
    return 0;

}
