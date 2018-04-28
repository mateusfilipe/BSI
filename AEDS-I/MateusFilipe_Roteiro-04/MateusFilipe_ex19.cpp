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
    int n, maiorP=-10000, menorP=10000,maiorI=-10000, menorI=10000,sPar=0, sImpar=0,contador2=0, contador1=0;
    while(n>0){
        cout<<"Digite um número:(Para interrompar basta digitar um número negativo)"<<endl;
        cin>>n;
        if(n%2==0){
            sPar+=n;
            contador1++;
            if(n>maiorP && n>0){
                maiorP=n;
            }
            if(n<menorP && n>0){
                menorP=n;
            }
        }else{
            sImpar+=n;
            contador2++;
            if(n>maiorI && n>0){
                maiorI=n;
            }
            if(n<menorI && n>0){
                menorI=n;
            }
        }
    }
    cout<<"Media par: "<<sPar/contador1<<endl;
    cout<<"Maior par: "<<maiorP<<endl;
    cout<<"Menor par: "<<menorP<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"Media ímpar: "<<sImpar/contador2<<endl;
    cout<<"Maior ímpar: "<<maiorI<<endl;
    cout<<"Menor ímpar: "<<menorI<<endl;

    system("pause");
    return 0;

}
