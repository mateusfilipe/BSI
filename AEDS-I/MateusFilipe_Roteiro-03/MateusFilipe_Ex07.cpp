#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>


using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");


   char letra;
    cout<<"Digite a letra: "<<endl;
    cin>>letra;
    letra=tolower(letra);
    switch (letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<"É uma vogal!!!"<<endl;
        break;
        default:
        cout<<"Não é uma vogal!!!"<<endl;
    }

    system("pause");
    return 0;

}
