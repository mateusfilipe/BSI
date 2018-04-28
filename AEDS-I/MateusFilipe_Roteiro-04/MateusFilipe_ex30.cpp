#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float n, p, Cn_p, An_p, fatn=1, fatp=1, fatnp=1;
    cout<<"Digite os valores de n e de p:"<<endl;
    cin>>n>>p;
    for(int i = n ; i > 0 ; i--){
        fatn*=i;
    }
    for(int j = p ; j > 0 ; j--){
        fatp*=j;
    }
    for(int k = n-p ; k > 0 ; k--){
        fatnp*=k;
    }
    Cn_p=fatn/(fatp*fatnp);
    An_p=fatn/fatnp;
    cout<<"Cn_p = "<<Cn_p<<endl;
    cout<<"An_p = "<<An_p<<endl;
    system("pause");
    return 0;

}
