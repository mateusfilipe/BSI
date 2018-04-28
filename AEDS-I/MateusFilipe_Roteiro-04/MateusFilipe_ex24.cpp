#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float S=0, pi=0;
    float j=1;
    for(int i = 1; i<=51 ; i++){
        if(int(i)%2==0){
            S-=(1/pow(j,3));
        }
        if(int(i)%2!=0){
            S+=(1/pow(j,3));
        }
    j+=2;
    }

    pi=pow((S*32),1.0/3);
    cout<<"PI = "<<pi<<endl;
    cout<<"S = "<<S<<endl;

    system("pause");
    return 0;

}
