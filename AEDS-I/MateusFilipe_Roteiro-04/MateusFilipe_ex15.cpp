#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float n1, n2, soma, sub, mult, div;
    int op;
    cout<<"Digite os n�meros que deseja utilizar:"<<endl;
    cin>>n1>>n2;
    cout<<"====================="<<endl;
    cout<<"Calculadora do Mateus"<<endl;
    cout<<"====================="<<endl;
    cout<<"Op��es:"<<endl;
    cout<<" 1-Soma\n 2-Subtra��o\n 3-Multiplica��o\n 4-Divisao\n 5-Sair"<<endl;
    cout<<"====================="<<endl;

    do{
        cout<<"Escolha sua opera��o:"<<endl;
        cin>>op;
        if(op==1){
            cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
        }else if(op==2){
            cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
        }else if(op==3){
            cout<<n1<<"x"<<n2<<"="<<n1*n2<<endl;
        }else if(op==4){
            if(n2==0){
                cout<<"Opera��o inv�lida."<<endl;
                return 0;
            }else{
                cout<<n1<<":"<<n2<<"="<<n1/n2<<endl;
            }
        }
        if(op!=1 && op!=2 && op!=3 && op!=4){
            cout<<"Opera��o Inv�lida!"<<endl;
            return 0;
        }
    }while(op!=5);
    system("pause");
    return 0;

}
