#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    int idade;
    cout<<"Quantos anos voc� tem?"<<endl;
    cin>>idade;
    if(idade<16){
        cout<<"N�o vota."<<endl;
    }else if(idade>16 && idade<18 || idade>70){
        cout<<"Facultativo."<<endl;
    }else{
        cout<<"Voto obrigat�rio."<<endl;
    }
    system("pause");
    return 0;

}
