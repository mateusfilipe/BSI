#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float n, n1, n2, auxiliar, anterior=0, proximo=0, atual=0;
    cout<<"Digite até onde deseja ir com a sequência de Ricci:"<<endl;
    cin>>n;
    cout<<"Agora digite os dois primeiros números da sequência:"<<endl;
    cin>>n1>>n2;
    cout<<n1<<" "<<n2<<" ";
    atual=n2;
    anterior=n1;
    for(int i = 1; i < n ; i++){
        proximo=atual+anterior;
        auxiliar=atual;
        atual=proximo;
        anterior=auxiliar;
        cout<<proximo<<" ";
    }
    cout<<endl;

    system("pause");
    return 0;

}
