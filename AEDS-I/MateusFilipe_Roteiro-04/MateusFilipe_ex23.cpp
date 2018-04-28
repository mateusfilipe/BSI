#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int nConsumidor, tipo, i=0, ii=0, iii=0;
    float consumido, total1, total2, total3, total3t=0, media;
    while(nConsumidor!=0){
        cout<<"Digiteo número do consumidor: "<<endl;
        cin>>nConsumidor;
        cout<<"Digite o tipo do consumidor: "<<endl;
        cin>>tipo;
        cout<<"Digiteo valor consumid em kWh: "<<endl;
        cin>>consumido;
       switch (tipo) {
            case 1:
                total1=consumido*0.3;
                cout<<"Valor: "<<total1<<endl;
                i++;
                break;
            case 2:
                total2=consumido*0.5;
                cout<<"Valor: "<<total2<<endl;
                ii++;
                break;
            case 3:
                total3=consumido*0.7;
                cout<<"Valor: "<<total3<<endl;
                iii++;
                break;
        }
    }
    total3t=(total1+total2+total3);
    media=(total1+total2)/(i+ii);
    cout<<"Total dos 3 tipos: "<<total3t<<endl;
    cout<<"Media de 1 e 2: "<<media<<endl;
    system("pause");
    return 0;

}
