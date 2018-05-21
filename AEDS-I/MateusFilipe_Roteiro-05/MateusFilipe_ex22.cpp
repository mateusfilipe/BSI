 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste:
    Entrada: ;
    Saída: ;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 0;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n, a[100], maior=-1000, con=0;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i < n ; i++){
        if(a[i]>maior){
            maior=a[i];
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(a[i]==maior){
            con++;
        }
    }
    if(con==2){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }
    system("pause");
    return 0;
}
