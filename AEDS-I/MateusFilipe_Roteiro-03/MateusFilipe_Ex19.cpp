#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int ano;
    cout<<"Digite o ano que deseja saber se � bissexto: "<<endl;
    cin>>ano;

    if(ano % 4 == 0 ){
        if( ano % 100 != 0 || ano % 400 == 0){
         cout<<ano<<" � bissexto."<<endl;
       }
    }else{
        cout<<ano<<" n�o � bissexto."<<endl;
    }

    system("pause");
    return 0;

}
