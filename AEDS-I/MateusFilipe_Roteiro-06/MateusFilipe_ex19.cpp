 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{
        3 4
        HHHH
        H...
        o.HH
    }
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int L, C, lin, col, a,b;
    char mapa[100][100];
    bool achou=false;
    int d[5] = {0, -1 , 0, 1, 0};

    cin>>L>>C;
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            cin>>mapa[i][j];
            if(mapa[i][j]=='o'){
                lin=i;
                col=j;
            }
        }
    }
    do{
        if(mapa[lin+1][col]=='H'){
            mapa[lin+1][col]='.';
            lin=lin+1;
            achou=true;
        }
        if(mapa[lin-1][col]=='H'){
            mapa[lin-1][col]='.';
            lin=lin-1;
            achou=true;
        }else if(mapa[lin][col+1]=='H'){
            mapa[lin][col+1]='.';
            col+=1;
            achou=true;
        }else if(mapa[lin][col-1]=='H'){
            mapa[lin][col-1]='.';
            col-=1;
            achou=true;
        }else{
            achou=false;
        }
    }while(achou==true);
    cout<<lin+1<<" "<<col+1<<endl;
    system("PAUSE");
    return 0;
}

