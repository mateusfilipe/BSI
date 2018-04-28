#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, c, x1=0, x2=0,delta=0;
    cout<<"ax²+bx+c"<<endl;
    cout<<"Digite o valor para A"<<endl;
    cin>>a;
    cout<<"Digite o valor para B"<<endl;
    cin>>b;
    cout<<"Digite o valor para C"<<endl;
    cin>>c;

    delta = pow(b,2)-4*a*c;
    x1 = ( -b - sqrt(delta) ) / (2 * a);
    x2 = ( -b + sqrt(delta) ) / (2 * a);
    cout<<"O valor de Delta será: "<<delta<<"\n"<<endl;
    if(delta<0)
    {
        cout<<"\nNão existe real\n"<<endl;
    }
    else if(delta==0)
    {
        cout<<"As raízes são iguais, ambas valem: "<<x1<<endl;

    }
    else
    {

        cout<<"O valor de X1 será: "<<x1<<endl;
        cout<<"O valor de X2 será: "<<x2<<endl;
    }

    return 0;


}
