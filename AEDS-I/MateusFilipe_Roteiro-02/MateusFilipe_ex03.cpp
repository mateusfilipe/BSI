#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float nota1, peso1, nota2, peso2, nota3, peso3, mediapon;
    cout<<"Digite a primeira nota e seu peso(Dê ""Enter"" ou use espaço para separa-los): "<<endl;
    cin>>nota1>>peso1;
    cout<<"Digite a segunda nota e seu peso(Dê ""Enter"" ou use espaço para separa-los): "<<endl;
    cin>>nota2>>peso2;
    cout<<"Digite a terceira nota e seu peso(Dê ""Enter"" ou use espaço para separa-los): "<<endl;
    cin>>nota3>>peso3;

    mediapon = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3))/(peso1+peso2+peso3);

    cout<<"O valor da média ponderada será: "<<mediapon;

    return 0;


}
