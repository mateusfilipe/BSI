#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float baseMaior, baseMenor, altura, valorMedio, area, valorFinal;
    cout<<"Digite o valor da base maior(em metros): "<<endl;
    cin>>baseMaior;
    cout<<"Digite o valor da base menor(em metros): "<<endl;
    cin>>baseMenor;
    cout<<"Digite a altura(em metros): "<<endl;
    cin>>altura;
    cout<<"Qual � o valor m�dio por m� no local?(Em R$)"<<endl;
    cin>>valorMedio;

    area=((baseMaior+baseMenor)*altura)/2;
    valorFinal=area*valorMedio;
    cout<<"O valor do terreno ser� de: "<<valorFinal<<endl;

    return 0;

}
