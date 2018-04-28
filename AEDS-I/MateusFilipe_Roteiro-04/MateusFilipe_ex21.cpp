#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float A=500000, taxaA=1.03;
    float B=700000, taxaB=1.02;
    int contador=2015;
    while(A<B){
        A=A*taxaA;
        B=B*taxaB;
        contador++;
    }
    cout<<"A ultrapassará B em: "<<contador<<endl;



    system("pause");
    return 0;

}
