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
    cout<<"Digite os números que deseja utilizar:"<<endl;
    cin>>n1>>n2;
    cout<<"====================="<<endl;
    cout<<"Calculadora do Mateus"<<endl;
    cout<<"====================="<<endl;
    cout<<"Opções:"<<endl;
    cout<<" 1-Soma\n 2-Subtração\n 3-Multiplicação\n 4-Divisao\n 5-Sair"<<endl;
    cout<<"====================="<<endl;

    do{
        cout<<"Escolha sua operação:"<<endl;
        cin>>op;
        if(op==1){
            cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
        }else if(op==2){
            cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
        }else if(op==3){
            cout<<n1<<"x"<<n2<<"="<<n1*n2<<endl;
        }else if(op==4){
            if(n2==0){
                cout<<"Operação inválida."<<endl;
                return 0;
            }else{
                cout<<n1<<":"<<n2<<"="<<n1/n2<<endl;
            }
        }
        if(op!=1 && op!=2 && op!=3 && op!=4){
            cout<<"Operação Inválida!"<<endl;
            return 0;
        }
    }while(op!=5);
    system("pause");
    return 0;

}
