#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int ano;
    cout<<"Digite o ano que deseja saber se é bissexto: "<<endl;
    cin>>ano;

    if(ano % 4 == 0 ){
        if( ano % 100 != 0 || ano % 400 == 0){
         cout<<ano<<" é bissexto."<<endl;
       }
    }else{
        cout<<ano<<" não é bissexto."<<endl;
    }

    system("pause");
    return 0;

}
