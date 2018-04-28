#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float x, fx, quadra, cubo;
    cout<<"Digite o valor de X: "<<endl;
    cin>>x;
    if(x<=1){
        fx=1;
    }else if(x>1 && x<=2){
        fx=2;
    }else if(x>2 && x<=3){
        fx=pow(x,2);
    }else if(x>3){
        fx=pow(x,3);
    }else{
        cout<<"ERROR!!!"<<endl;
    }
    cout<<"f("<<x<<")="<<fx<<endl;

    system("pause");
    return 0;

}
