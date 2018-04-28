#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#define pi 3.141516

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float tensaoS, diametroD, cargaQ, n;
    cout<<"Digite o valor do doametro D e da carga Q:"<<endl;
    cin>>diametroD>>cargaQ;
    if(diametroD>100){
        n=2;
    }else if(diametroD<50){
        n=6;
    }else{
        n=4;
    }
    cout<<"Valor de n: "<<n<<endl;
    tensaoS= ((4*cargaQ)/(pi*pow(diametroD,2)))*n;
    cout<<"A tensão será: "<<tensaoS<<endl;
    system("pause");
    return 0;

}
