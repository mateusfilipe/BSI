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

    long long nBits, bit, somaOctal=0, somahexa=0, decimal=0, octal=0, hexadecimal=0;
    int multiplicador1=1, multiplicador2=1, ii=0, iii=0;
    cout<<"Digite o número de bits que deseja converter: "<<endl;
    cin>>nBits;
    for(int i = 0 ; i < nBits ; i++){
        do{
            cout<<"Digite o bit:"<<endl;
            cin>>bit;
        }while(bit!=0 && bit!=1);


        iii++;

        decimal+=bit*pow(2,i);

        somaOctal+=bit*pow(2,ii);
        ii++;

        somahexa+=bit*pow(2,iii);

        if((i+1)%3==0){
            octal+=somaOctal*multiplicador1;
            multiplicador1*=10;
            somaOctal=0;
            ii=0;
        }

        if((i+1)%4==0){
            hexadecimal+=somahexa*multiplicador2;
            multiplicador2*=10;
            somahexa=0;
            iii=0;

        }

    }
    if(nBits%3!=0){
            octal+=somaOctal*multiplicador1;
    }
    else if(nBits%4!=0){
            hexadecimal+=somahexa*multiplicador2;
    }

    cout<<"Decimal: "<<decimal<<endl;
    cout<<"Octal: "<<octal<<endl;
    //Tentei usar a mesma lógica da Octal para Hexadecimal mas não deu certo
    //cout<<"Hexadecimal: "<<hexadecimal<<endl;
    cout<<"Hexadecimal: "<<hex<<decimal<<endl;


    system("pause");
    return 0;

}
