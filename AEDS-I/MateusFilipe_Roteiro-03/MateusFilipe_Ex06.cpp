#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, result;
    char op;
    cout<<"__________________________________"<<endl;
    cout<<"             Menu"<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"(+) para SOMAR!"<<endl;
    cout<<"(-) para SUBTRAIR!"<<endl;
    cout<<"(*) para MULTIPLICAR!"<<endl;
    cout<<"(/) para DIVIDIR!"<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"Digite os dois n�meros que deseja realizar opera��o:"<<endl;
    cin>>num1>>num2;

    cout<<"Qual opera��o se deseja realizar:"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        result=num1+num2;
        cout<<num1<<"+"<<num2<<"="<<result<<endl;
        break;
    case '-':
        result=num1-num2;
        cout<<num1<<"-"<<num2<<"="<<result<<endl;
        break;
    case '*':
        result=num1*num2;
        cout<<num1<<"*"<<num2<<"="<<result<<endl;
        break;
    case '/':

        if(num2!=0)
        {
            result=num1/num2;
            cout<<num1<<"/"<<num2<<"="<<result<<endl;

        }else{
            cout<<"N�o � poss�vel realizar divis�o por ZERO!"<<endl;
        }
        break;
    default:
        cout<<"Opera��o inv�lida!!!"<<endl;
    }


    system("pause");
    return 0;

}
