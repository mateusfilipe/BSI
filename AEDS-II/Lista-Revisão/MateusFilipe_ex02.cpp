//Mateus Filipe De Lima Souza - BSI

#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

void troca(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<"Valores trocados: "<<endl;
    cout<<"N1: "<<*a<<endl;
    cout<<"N2: "<<*b<<endl;
}
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int *p1, *p2;
    int n1, n2;
    cout<<"Digite 2 números: "<<endl;
    cin>>n1>>n2;
    p1 = &n1;
    p2 = &n2;
    cout<<"Valores normais: "<<endl;
    cout<<"N1: "<<*p1<<endl;
    cout<<"N2: "<<*p2<<endl;
    troca(p1,p2);
    system("PAUSE");
    return 0;
}

