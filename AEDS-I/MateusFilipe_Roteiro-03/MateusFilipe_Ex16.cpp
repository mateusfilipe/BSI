#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float ladoA, ladoB, ladoC;
    cout<<"Digiteo o valor de cada lado do tri�ngulo: "<<endl;
    cin>>ladoA>>ladoB>>ladoC;
    if(ladoA+ladoB>ladoC && ladoC>ladoA-ladoB || ladoB+ladoC>ladoA && ladoA>ladoB-ladoC || ladoA+ladoC>ladoB && ladoB>ladoA-ladoC){
        if(ladoA > 0 && ladoB>0 && ladoC>0){
            if(ladoA==ladoB && ladoA==ladoC){
                cout<<"Equilatero"<<endl;
            }else if(ladoA==ladoB || ladoB==ladoC || ladoC==ladoA){
                cout<<"Is�celes"<<endl;
            }else{
                cout<<"Escaleno"<<endl;
            }
        }
    }else{
        cout<<"N�o � poss�vel formar um tri�ngulo."<<endl;
    }

    system("pause");
    return 0;

}
