#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    int n, atual=1, anterior=0, auxiliar=0, proximo=0;
    cout<<"Digite até onde deseja ir com Fibonacci:"<<endl;
    cin>>n;
    cout<<1<<" ";
    for(int i = 1; i < n ; i ++){
        proximo=atual+anterior;
        anterior=atual;
        atual=proximo;
        cout<<proximo<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;

}
