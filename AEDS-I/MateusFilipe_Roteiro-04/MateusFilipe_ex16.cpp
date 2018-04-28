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
    long long n, fatorial=1, valor;

    cout<<"Digite quantos números deseja trabalhar:"<<endl;
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        cout<<"Digite o "<<i+1<<"º valor:"<<endl;
        cin>>valor;
        fatorial=1;
            for(int j = valor; j>0 ; j--){
                fatorial*=j;

            }
            cout<<"!"<<valor<<"="<<fatorial<<endl;

    }



    system("pause");
    return 0;

}
