#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <string.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    string num, numI;
    cout<<"Digite o valor n�mero: "<<endl;
    cin>>num;
    numI=string(num.rbegin(),num.rend());
    if(num==numI){
        cout<<"� um pal�ndromo."<<endl;
    }else{
        cout<<"N�o � pal�ndromo."<<endl;
    }

    system("pause");
    return 0;

}
