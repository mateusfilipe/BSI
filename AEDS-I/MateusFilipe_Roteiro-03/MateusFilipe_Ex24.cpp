#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    float ladoMaior, ladoMenor, numOuro=1.618, raz;
    cout<<"Digite o lado maior e em seguida o lado menor: "<<endl;
    cin>>ladoMaior>>ladoMenor;
    raz=ladoMaior/ladoMenor;
    if(raz==numOuro){
        cout<<"É um retângulo de ouro."<<endl;
    }else{
        cout<<"Não é um retângulo de ouro."<<endl;
    }
    system("pause");
    return 0;

}
