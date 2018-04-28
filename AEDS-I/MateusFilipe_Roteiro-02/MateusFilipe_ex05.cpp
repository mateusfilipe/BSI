#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salariofixo, vendas, beneficio,salariobe;
    cout<<"Digite o seu salário fixo: "<<endl;
    cin>>salariofixo;
    cout<<"Digite qual foi o valor das vendas realizadas:"<<endl;
    cin>>vendas;

    beneficio=vendas*0.04;
    salariobe=beneficio+salariofixo;

    cout<<"O valor do benefício será de: "<<beneficio<<endl;
    cout<<"E o salário com o benefício será: "<<salariobe;


    return 0;


}
