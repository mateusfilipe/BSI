//Mateus Filipe De Lima Souza - 1� Per�odo - BSI
/*
	Exemplo de Teste{
        Digite o n�mero de cidades: 4
        0 - N�o existe trajeto;
        1 - Existe trajeto;

        1 1 1 0
        0 1 1 0
        1 0 1 1
        0 0 1 1

        Digite de qual cidade deseja saber quantas estradas saem:
        3

        Da cidade 3 saem 2 estradas(contando sua pr�pria estrada).
        Na cidade 3 chegam 2 estradas(contando sua pr�pria estrada).

        A cidade 0 possui o maior n�mero de estradas chegando (3 estradas).

        A cidade 0 n�o est� isolada.
        A cidade 1 n�o est� isolada.
        A cidade 2 n�o est� isolada.
        A cidade 3 n�o est� isolada.

        Digite por quantas cidades a rota ser� feita:
        5
        Agora, digite a rota:
        2 3 2 1 0
        Rota imposs�vel.
	}


*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 100;
const int C = 100;

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    //DECLARA��O DE VARI�VEIS{
        int n, L[L][C], k, saem=0, nEstradas[100], chegam=0;
        int l = 0, maior = -1000, isolados[100], maiorC, isol[100];
        int m, rota[100], pRota=0;
    //}
    //===================================================================================================//
    //PREENCHENDO A MATRIZ DAS ESTRADAS DE "L[][]"{
        cout<<"Digite o n�mero de cidades: ";
        cin>>n;
        cout<<"0 - N�o existe trajeto; "<<endl;
        cout<<"1 - Existe trajeto; "<<endl;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
    //            if(i==j){
    //                L[i][j]=1;
    //            }else{
    //                cout<<"Digite se existe traejo entre:"<<endl;
    //                cout<<"CIDADE "<<i<<" -> CIDADE "<<j<<endl;
                    cin>>L[i][j];
    //            }
            nEstradas[j]=0;
            isol[i]=-1;
            }
        }
    //}
    //====================================================================================================//
    //CONTANDO QUANTAS ESTRADAS CHEGAM E SAEM DE "K"{
        cout<<"Digite de qual cidade deseja saber quantas estradas saem:"<<endl;
        cin>>k;
        for(int i = k ; i <= k ; i++){
            for(int j = 0 ; j < n ;j++){
                if(L[i][j]==1){
                    saem++;
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = k ; j <= k ;j++){
                if(L[i][j]==1){
                    chegam++;

                }
            }
        }
        cout<<endl;
        cout<<"Da cidade "<<k<<" saem "<<saem<<" estradas(contando sua pr�pria estrada)."<<endl;
        cout<<"Na cidade "<<k<<" chegam "<<chegam<<" estradas(contando sua pr�pria estrada)."<<endl;
        cout<<endl;
    //}
    //==================================================================================================//
    //DESCOBRINDO QUAL CIDADE EM QUE SE CHEGAM MAIS ESTRADAS{

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(L[i][j]==1){
                    nEstradas[i]++;
                }
            }
        }
        for(int i = 0, j = 1 ; i < n ; i++ , j++){
            if(nEstradas[i]>maior){
                maior=nEstradas[i];
                maiorC=i;
    //            cout<<"> maior  = "<<maior<<endl;
    //            cout<<"> maiorC =  "<<maiorC[i]<<endl;
            }
        }
        cout<<endl;
        cout<<"A cidade "<<maiorC<<" possui o maior n�mero de estradas chegando ("<<maior<<" estradas)."<<endl;
        cout<<endl;
    //}
    //====================================================================================================//
    //DESCOBRINDO A CIDADE ISOLADA{

        for(int i = 0 ; i < n ; i++){
            if(nEstradas[i]==1){
                isolados[i]=nEstradas[i];
                isol[i]=i;
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(isol[i]!=-1){
                cout<<"A cidade ";
                cout<<isol[i];
                cout<<" est� isolada."<<endl;
            }else{
                isol[i]=i;
                cout<<"A cidade ";
                cout<<isol[i]<<" n�o est� isolada."<<endl;
            }
        }

    //}
    //====================================================================================================//
    //VERIFICANDO SE � POSSIVEL A ROTA SEGUNDO O VETOR ROTA[]{
        cout<<endl;
        cout<<"Digite por quantas cidades a rota ser� feita: "<<endl;
        cin>>m;
        cout<<"Agora, digite a rota: "<<endl;
        for(int i = 0 ; i < m ; i++){
            cin>>rota[i];
        }
        for(int i = 0 ; i < m ; i++){
            if(L[rota[i]][rota[i+1]]==1){
                    pRota++;
//                  Verificando o comportamentode pRota
//                  cout<<"prota: "<<pRota<<endl;
            }
        }
        if(pRota==m){
            cout<<"Rota poss�vel."<<endl;
        }else{
            cout<<"Rota imposs�vel."<<endl;
        }

    //====================================================================================================//
    system("pause");
    return 0;
}
