#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, quadrado, raiz;
    cout<<"Digite os dois número, em sequência usando a tecla Enter: "<<endl;
    cin>>num1>>num2;
    if(num1>num2){
        raiz=sqrt(num1);
        quadrado=pow(num2,2);
        cout<<"Quadrado do maior: "<<quadrado<<endl;
        cout<<"Raiz do menor: "<<raiz<<endl;
    }else if(num2>num1){
        raiz=sqrt(num2);
        quadrado=pow(num1,2);
        cout<<"Quadrado do maior: "<<quadrado<<endl;
        cout<<"Raiz do menor: "<<raiz<<endl;
    }else{
        cout<<"Ambos os números são iguais."<<endl;
    }


    system("pause");
    return 0;

}
