#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float a, b, c, delta, x1, x2;
    cout<<"Digite os valores de A, B e C para a equa��o (ax�+bx+c), em sequ�ncia:"<<endl;
    cin>>a>>b>>c;
    if(a==0){
        x1=b+c;
        cout<<"O valor de X ser�: "<<x1<<endl;
    }else if(a==0 && b==0){
        cout<<"O valor de X ser�: "<<c<<endl;
    }else{
        delta=pow(b,2) - 4*a*c;
        if(delta<0){
            cout<<"N�o existe ra�z real!"<<endl;
        }else if(delta==0){
            x1=(-b)/(2*a);
            cout<<"Os valores de X' e X'' s�o iguais �: "<<x1<<endl;

        }else{
            x1=(-b)+sqrt(delta)/(2*a);
            x2=(-b)-sqrt(delta)/(2*a);
            cout<<"O valor de X' ser�: "<<x1<<endl;
            cout<<"O valor de X'' ser�: "<<x2<<endl;
        }
    }

    system("pause");
    return 0;

}
