#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    int n, centena, dezena, unidade, soma;
    cout<<"Digite o numero: "<<endl;
    cin>>n;
    centena=(n%10)*100;
    dezena=((n/10)%10)*10;
    unidade=(n/10)/10;

    soma=centena+unidade+dezena;
    if(soma==n){
        cout<<"É palíndromo."<<endl;
    }else{
        cout<<"Não é palíndromo."<<endl;
    }

    system("pause");
    return 0;

}
