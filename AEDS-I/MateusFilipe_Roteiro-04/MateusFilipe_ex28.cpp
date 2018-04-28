#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int M, divP=0, i=1, fat=0, soma=0;
    do{
        cout<<"Digite M:"<<endl;
        cin>>M;

        if(M%2==0){
            divP=0;
            for(int l = 1 ; l<=M ; l++){
                    if(M%l==0){
                        divP++;
                    }
            }
            cout<<"Número de divisores: "<<divP<<endl;

        }

        if(M%2!=0){
            if(M<10){
                    fat=1;
                for(int j = M ; j>0 ; j--){
                    fat*=j;
                }
                cout<<"Fatorial: "<<fat<<endl;
            }else{
                for(int k = 1 ; k <= M ; k++){
                    soma=soma+k;
                }
                cout<<"Soma: "<<soma<<endl;
            }
        }

    i++;
    }while(M!=0);


    system("pause");
    return 0;

}
