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
    float n, media=0, soma=0, contador=0;

    while(n!=-1){
        cout<<"Digite um número: (digite -1 para mostrar a média de todos digitados)"<<endl;
        cin>>n;
        soma=soma+n;
        contador++;
    }
    media=soma/contador;
    cout<<"Media="<<media<<endl;

    system("pause");
    return 0;

}
