#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salariofixo, vendas, beneficio,salariobe;
    cout<<"Digite o seu sal�rio fixo: "<<endl;
    cin>>salariofixo;
    cout<<"Digite qual foi o valor das vendas realizadas:"<<endl;
    cin>>vendas;

    beneficio=vendas*0.04;
    salariobe=beneficio+salariofixo;

    cout<<"O valor do benef�cio ser� de: "<<beneficio<<endl;
    cout<<"E o sal�rio com o benef�cio ser�: "<<salariobe;


    return 0;


}
