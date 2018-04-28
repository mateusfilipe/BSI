#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "");

    float custoDeFabrica, custoConsumidor;
    cout<<"Digite o custo de fábrica:"<<endl;
    cin>>custoDeFabrica;
    if(custoDeFabrica<=28000){
        custoConsumidor = custoDeFabrica + custoDeFabrica * 0.05;
    }else if(custoDeFabrica>28000 && custoDeFabrica<45000){
        custoConsumidor = custoDeFabrica + (custoDeFabrica * 0.10) + (custoDeFabrica * 0.15);
    }else{
        custoConsumidor = custoDeFabrica + (custoDeFabrica * 0.15) + (custoDeFabrica * 0.20);
    }
    cout<<"O custo do carro ao consumidr será de: "<<custoConsumidor<<endl;


    system("pause");
    return 0;

}
