#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    long long  a=2, soma=0, divisor;
    for(int i = 0 ; i < 5 ; i++){

        do{
            a++;
            soma=0;
            for(divisor=1 ; divisor<=a; divisor++){
                if(a%divisor==0 && divisor<a){
                    soma+=divisor;
                }
            }
            if(soma==a){
                cout<<soma<<endl;
            }
        }while(divisor!=a);
    a++;
    }
    system("pause");
    return 0;

}
