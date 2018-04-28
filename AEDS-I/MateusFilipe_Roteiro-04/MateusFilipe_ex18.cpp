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
    cout<<"   ASCII     |"<<"| HEXADECIMAL |"<<"|   DECIMAL |"<<endl;
    for(int i=32; i<=255; i++){
        cout<<"         "<<(unsigned char)i<<"          "<<hex<<i<<"          "<<dec<<i<<endl;
    }
    system("pause");
    return 0;

}
