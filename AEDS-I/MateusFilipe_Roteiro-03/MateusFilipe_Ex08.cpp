#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float salarioAtual, salarioReajustado;
    cout<<"Digite o sal�rio a ser reajustado: "<<endl;
    cin>>salarioAtual;
    if(salarioAtual<700){
        salarioReajustado = salarioAtual + (salarioAtual*0.3);
    }else{
        salarioReajustado = salarioAtual + (salarioAtual*0.1);
    }
    cout<<"O sal�rio ap�s o reajuste ser� de: "<<salarioReajustado<<endl;



    system("pause");
    return 0;

}
