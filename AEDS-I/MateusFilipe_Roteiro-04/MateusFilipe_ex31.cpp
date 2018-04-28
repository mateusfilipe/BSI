#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    char n1, n2;
    int cont = -1;
    cout<<"Digite as duas letras: "<<endl;
    cin>>n1>>n2;
    n1=tolower(n1);
    n2=tolower(n2);
    while(n1<n2){
        n1++;
        cont++;
    }
    cout<<"Têm "<<cont<<" letras."<<endl;

    system("pause");
    return 0;

}
