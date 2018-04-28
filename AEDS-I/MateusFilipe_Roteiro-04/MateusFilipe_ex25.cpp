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
    float x, senx1=0, senx2=0, j=1, fat=0, rad, s;
    int c=1;
    cout<<"Digite o valor de X:"<<endl;
    cin>>x;
    rad=(3.14159*x)/180.0;
    do{

        j=j+2;
        fat=1.0;
        for(int i = j ; i > 0 ; i--){
            fat*=i;
        }
        if(c%2==0){
            senx1+=pow(rad,j)/fat;
        }else{
            senx2-=pow(rad,j)/fat;
        }

    c++;
    }while(c<=15);
    s=senx1+senx2+rad;
    cout<<"sen(x) = "<<s<<endl;
    system("pause");
    return 0;

}
