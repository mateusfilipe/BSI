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
    int a,b,restoDivisao;
    cout<<"Digite os valores de A e B"<<endl;
    cin>>a>>b;

    restoDivisao=a%b;
    while(restoDivisao!=0){
        a=b;
        b=restoDivisao;
        restoDivisao=a%b;
    }


    cout<<"MDC="<<b<<endl;
    system("pause");
    return 0;

}
