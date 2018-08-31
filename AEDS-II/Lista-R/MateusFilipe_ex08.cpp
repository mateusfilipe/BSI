//Mateus Filipe De Lima Souza - BSI

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

int raiz(int &num){
    num = sqrt(num);
    return num;
}
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int num;
    cin>>num;
    cout<<raiz(num)<<endl;

    system("PAUSE");
    return 0;
}
