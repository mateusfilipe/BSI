 //Mateus Filipe De Lima Souza - 1� Per�odo - BSI
/*
    Exemplo de Teste{
        Digite 2 n�meros:
        12
        18
        MDC = 6
    }
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>
#include <string>

using namespace std;

int calcMDC(int a, int b){
    if(b == 0 ){
        return a;
    }else{
        return calcMDC(b, a%b);
    }
}

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int a , b;
    cout<<"Digite 2 n�meros: "<<endl;
    cin>>a>>b;
    cout<<"MDC = "<<calcMDC(a,b)<<endl;
    system("PAUSE");
    return 0;
}

