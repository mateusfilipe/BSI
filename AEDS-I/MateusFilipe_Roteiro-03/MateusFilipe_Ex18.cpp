#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    cout<<"Digite os 2 n�meros: "<<endl;
    cin>>num1>>num2;
    if(num1%num2==0){
        cout<<num1<<" � mult�plo de "<<num2<<endl;
    }else{
        cout<<num1<<" n�o � mult�plo de "<<num2<<endl;
    }
    system("pause");
    return 0;

}
