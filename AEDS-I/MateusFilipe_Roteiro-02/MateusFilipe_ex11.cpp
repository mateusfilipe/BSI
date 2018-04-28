#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float ruaA, ruaB, ruaC, meta, tamanhoBairro, voltas;
    cout<<"Digite o tamanho da rua A: "<<endl;
    cin>>ruaA;
    cout<<"Digite o tamanho da rua B: "<<endl;
    cin>>ruaB;
    cout<<"Digite o tamanho da rua C: "<<endl;
    cin>>ruaC;
    cout<<"Digite a sua meta: "<<endl;
    cin>>meta;

    tamanhoBairro=ruaA+ruaB+ruaC;
    voltas=tamanhoBairro/meta;
    cout<<"Dona Maria das Couve precisará dar "<<voltas<<" voltas";

    return 0;


}
