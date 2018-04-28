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
    cout<<"Digite o valor número: "<<endl;
    cin>>num;
    numI=string(num.rbegin(),num.rend());
    if(num==numI){
        cout<<"É um palíndromo."<<endl;
    }else{
        cout<<"Não é palíndromo."<<endl;
    }

    system("pause");
    return 0;

}
