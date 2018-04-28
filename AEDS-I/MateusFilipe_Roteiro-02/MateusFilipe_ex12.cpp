#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int anoAtual, copas;
    cout<<"Digite o ano atual"<<endl;
    cin>>anoAtual;
    copas=((anoAtual-1930)/4)-2;

    cout<<"Foram realizadas "<<copas<<" copas.";
    return 0;


}
