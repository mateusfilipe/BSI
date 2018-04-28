#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float peso, nGotas;
    int idade;
    cout<<"Digite a sua idade: "<<endl;
    cin>>idade;
    cout<<"Digite seu peso(em KG): "<<endl;
    cin>>peso;

    if(idade>12){
        if(peso>=60){
            nGotas=(1000.0/500)*20;
        }else{
            nGotas=(875.0/500)*20;
        }
    }else{
        if(peso>=5 && peso<=9){
            nGotas=(125.0/500)*20;
        }else if(peso>9 && peso<=16){
            nGotas=(250.0/500)*20;
        }else if(peso>16 && peso<=24){
            nGotas=(375.0/500)*20;
        }else if(peso>24 && peso<=30){
            nGotas=(500.0/500)*20;
        }else if(peso>30){
            nGotas=(750.0/500)*20;
        }
    }
    cout<<"Deverá tomar "<<nGotas<<" gotas."<<endl;

    system("pause");
    return 0;

}
