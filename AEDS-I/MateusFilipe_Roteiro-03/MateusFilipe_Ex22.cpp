#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    int v1, v2, digito1=0, digito2=0, digito3=0, digito4=0, digito5=0, digito6=0, digito7=0, digito8=0, digito9=0, digito10=0, digito11=0;
    long long cpfEntrada=0;
    cout<<"Digite os primeiros 9 numeros do cpf: "<<endl;
    cin>>cpfEntrada;

    digito1=(cpfEntrada%10);
    digito2=((cpfEntrada%100)-digito1)/10;
    digito3=((cpfEntrada%1000)-(digito2*10)-digito1)/100;
    digito4=((cpfEntrada%10000)-(digito3*100)-(digito2*10)-digito1)/1000;
    digito5=((cpfEntrada%100000)-(digito4*1000)-(digito3*100)-(digito2*10)-digito1)/10000;
    digito6=((cpfEntrada%1000000)-(digito5*10000)-(digito4*1000)-(digito3*100)-(digito2*10)-digito1)/100000;
    digito7=((cpfEntrada%10000000)-(digito6*100000)-(digito5*10000)-(digito4*1000)-(digito3*100)-(digito2*10)-digito1)/1000000;
    digito8=((cpfEntrada%100000000)-(digito7*1000000)-(digito6*100000)-(digito5*10000)-(digito4*1000)-(digito3*100)-(digito2*10)-digito1)/10000000;
    digito9=((cpfEntrada%1000000000)-(digito8*10000000)-(digito7*1000000)-(digito6*100000)-(digito5*10000)-(digito4*1000)-(digito3*100)-(digito2*10)-digito1)/100000000;
    digito10=((cpfEntrada%10000000000)-(digito9*10000000)-(digito8*10000000)-(digito7*1000000)-(digito6*100000)-(digito5*10000)-(digito4*1000)-(digito3*100)-(digito2*10)-digito1)/1000000000;
    digito11=((cpfEntrada%100000000000)-(digito10*1000000000)-(digito9*10000000)-(digito8*10000000)-(digito7*1000000)-(digito6*100000)-(digito5*10000)-(digito4*1000)-(digito3*100)-(digito2*10)-digito1)/10000000000;

    v1=((digito11*10)+(digito10*9)+(digito9*8)+(digito8*7)+(digito7*6)+(digito6*5)+(digito5*4)+(digito4*3)+(digito3*2))%11;
    if(v1<2){
        v1=0;
    }
    else{
        v1=11-v1;
    }

    v2=((digito11*11)+(digito10*10)+(digito9*9)+(digito8*8)+(digito7*7)+(digito6*6)+(digito5*5)+(digito4*4)+(digito3*3)+(v1*2))%11;

    if(v2<2){
        v2=0;
    }else{
        v2=11-v2;
    }



    if(v1==digito2 && v2==digito1){
        cout<<"\nCPF válido"<<endl;
    }else{
        cout<<"\nCPF inválido"<<endl;
    }
    /* Verifando os CPF's
      cout<<digito1<<endl;
      cout<<digito2<<endl;
      cout<<digito3<<endl;
      cout<<digito4<<endl;
      cout<<digito5<<endl;
      cout<<digito6<<endl;
      cout<<digito7<<endl;
      cout<<digito8<<endl;
      cout<<digito9<<endl;
      cout<<digito10<<endl;
      cout<<digito11<<endl;

        cout<<v1<<endl;
        cout<<v2<<endl;
    */

    system("pause");
    return 0;

}
