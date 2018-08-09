 //Mateus Filipe De Lima Souza - 2º Período - BSI
 /*
    Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa.
    Para isto, mandou digitar uma linha para cada preço de compra e preço de venda das mesmas.
    Fazer um algoritmo em C++ que:
    - Determine e escreva quantas mercadorias geram:
    •Lucro < 10%.
    •10% <= lucro <= 20%.
    •Lucro > 20%.
    - Determine e escreva: O valor total de compra e de venda de todas as mercadorias, assim como o lucro total (percentual e valor).
 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>
#include <string>

//Vetor:
const int TAM = 1000;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");

    int nMercadorias;
    float compra[TAM], venda[TAM], lucro[TAM], nLucro[TAM], pLucro[TAM];
    float compratotal = 0, vendatotal = 0,lucrototal = 0;

    cout<<"Digite quantas mercadorias são comercializadas: "<<endl;
    cin>>nMercadorias;

    for(int i = 0 ; i < nMercadorias ; i++){
        cout<<"Digite o preço de compra e de venda do produto "<<i<<" : "<<endl;
        cin>>compra[i]>>venda[i];

        compratotal += compra[i];
        vendatotal += venda[i];

        lucro[i] = venda[i] - compra[i];
        lucrototal += lucro[i];
    }

    for(int i = 0 ; i < nMercadorias ;  i++){
        if(lucro[i] < (compra[i]/10)){
            nLucro[0]++;
        }
        if(lucro[i] >= (compra[i]/10) && lucro[i] <= (compra[i]/5)){
            nLucro[1]++;
        }
        if(lucro[i] > (compra[i]/5)){
            nLucro[2]++;
        }
    }


    cout<<"\nNúmero de produtos com Lucro < 10%: "<<endl;
    cout<<nLucro[0]<<endl;
    cout<<"Número de produtos com 10% <= Lucro <= 20%: "<<endl;
    cout<<nLucro[1]<<endl;
    cout<<"Número de produtos com Lucro > 20%: "<<endl;
    cout<<nLucro[2]<<endl;

    cout<<"Compra Total: ";
    cout<<compratotal<<endl;
    cout<<"Venda Total: ";
    cout<<vendatotal<<endl;
    cout<<"Lucro Total: ";
    cout<<lucrototal<<endl;

    system("PAUSE");
    return 0;
}

