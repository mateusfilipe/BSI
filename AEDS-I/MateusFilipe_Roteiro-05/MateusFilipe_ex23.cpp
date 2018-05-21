//Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplos de teste:
    Entrada: ;
    Saída: ;

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

const int TAM = 0;

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int F, r, dias, posi[100];
    float f;
    cin>>F;
    cin>>r;
    for(int i = 0 ; i < r ; i++){
        cin>>posi[i];
    }
    dias = (posi[0]-1)>(F-posi[r-1])?(posi[0]-1):(F-posi[r-1]);

    for (int i = 0; i < r; i++ ){
        f = floor((float)(posi[i]-posi[i-1])/(float)2);
    if ( f > dias ) dias = f;
    }
    cout<<dias<<endl;
    system("pause");
    return 0;
}
