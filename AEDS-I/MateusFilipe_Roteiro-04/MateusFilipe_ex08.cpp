#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    int num, contador=0;
    cout<<"Digite o número: "<<endl;
    cin>>num;
    for(int i = 1 ; i<=num ; i++){
        if(num%i==0){
            contador++;
        }
    }
    if(contador==2 || num==1){
        cout<<"Número primo!"<<endl;
    }else{
        cout<<"Não é primo!"<<endl;
    }

    system("pause");
    return 0;

}
