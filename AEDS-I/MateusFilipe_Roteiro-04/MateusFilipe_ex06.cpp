#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    int num[10], numPares=0, somaImp=0;
    for(int i = 0; i<10; i++){
        cout<<"Digite o "<<i+1<<"� n�mero."<<endl;
        cin>>num[i];
        if(num[i]%2==0){
            numPares++;
        }else{
            somaImp+=num[i];
        }
    }
    cout<<"Soma dos �mpares = "<<somaImp<<endl;
    cout<<"N�mero de pares = "<<numPares<<endl;
    system("pause");
    return 0;

}
