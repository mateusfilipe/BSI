#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float A=0,
          B=400000,
          tempo=0;

    while(A<B){
        A=A+30.0;
        B=B-40.0;
        tempo++;
    }
    cout<<"A percorrerá: "<<A/1000<<" KM"<<endl;
    cout<<"B percorrerá: "<<(400000-B)/1000<<" KM"<<endl;
    cout<<"Tempo necessário para colidirem: "<<((tempo-1)/3600)<<" h"<<endl;
    system("pause");
    return 0;

}
