#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float despesaFixa=200, ingresso=5, lucro=0;
    int nEntrada=120, i=0;
    float diminui=0.50, aumento=26, preco=0, totalApos=0;
    while(ingresso>1){

        totalApos=(aumento*i)+nEntrada;
        preco+=ingresso*totalApos;
                lucro+=preco-despesaFixa;
        cout<<"Preço = "<<ingresso<<endl;
        cout<<"Aumento = "<<aumento*i<<endl;
        cout<<"Total após = "<<totalApos<<endl;
        cout<<"Arrecadado após = "<<preco<<endl;
        cout<<"Lucro = "<<lucro<<endl;
        i++;
        preco=0;
        lucro=0;


        ingresso-=diminui;


        cout<<"==================="<<endl;
    }




    system("pause");
    return 0;

}
