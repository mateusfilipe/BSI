 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{

        Preencha a matriz R[5][5]
            1 2 3 4 5
            1 2 3 4 5
            1 2 3 4 5
            1 2 3 4 5
            1 2 3 4 5
        Preencha a matriz G[5][5]
            2 4 6 8 0
            2 4 6 8 0
            2 4 6 8 0
            2 4 6 8 0
            2 4 6 8 0
        Preencha a matriz B[5][5]
            3 6 9 0 2
            3 6 9 0 2
            3 6 9 0 2
            3 6 9 0 2
            3 6 9 0 2
        Cinza:
            2 4 6 4 2
            2 4 6 4 2
            2 4 6 4 2
            2 4 6 4 2
            2 4 6 4 2
        Negativo:
            253 251 249 251 253
            253 251 249 251 253
            253 251 249 251 253
            253 251 249 251 253
            253 251 249 251 253
        Poster:
            0 0 0 0 0
            0 0 0 0 0
            0 0 0 0 0
            0 0 0 0 0
            0 0 0 0 0
    }
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>

//Vetor:

const int TAM = 5;

//Matriz:

const int L = 3;
const int C = 3;

using namespace std;

void preencheRGB(int R[TAM][TAM], int G[TAM][TAM], int B[TAM][TAM]); //SUBROTINA QUE PREENCHE R, G, B;
void zinzA(int R[TAM][TAM], int G[TAM][TAM], int B[TAM][TAM], int cinza[TAM][TAM]); //SUBROTINA QUE CRIA A MATRIZ CINZA;
void negativando(int R[TAM][TAM], int G[TAM][TAM], int B[TAM][TAM],int cinza[TAM][TAM], int negat[TAM][TAM]); //SUBROTINA QUE CRIA A MATRIZ NEGATIVA DE CINZA;
void posterizando(int cinza[TAM][TAM], int poster[TAM][TAM]); //SUBROTINA QUE CRIA A MATRIZ POSTER;

int main()
{
    int R[TAM][TAM], G[TAM][TAM], B[TAM][TAM], cinza[TAM][TAM], negat[TAM][TAM], poster[TAM][TAM];

    preencheRGB(R, G, B);
    zinzA(R, G, B, cinza);
    negativando(R, G, B, cinza, negat);
    posterizando(cinza, poster);

    system("pause");
    return 0;
}
void preencheRGB(int R[TAM][TAM], int G[TAM][TAM], int B[TAM][TAM]){

    cout<<"Preencha a matriz R[5][5]"<<endl;
    for(int i = 0 ; i < TAM ; i++){
        for(int j = 0 ; j < TAM ; j++){
            cin>>R[i][j];
            if(R[i][j]>255 || R[i][j]<0){
                cout<<"Erro! Preencha novamente"<<endl;
            }
        }
    }
    cout<<"Preencha a matriz G[5][5]"<<endl;
    for(int i = 0 ; i < TAM ; i++){
        for(int j = 0 ; j < TAM ; j++){
            cin>>G[i][j];
            if(G[i][j]>255 || G[i][j]<0){
                cout<<"Erro! Preencha novamente"<<endl;
            }
        }
    }
    cout<<"Preencha a matriz B[5][5]"<<endl;
    for(int i = 0 ; i < TAM ; i++){
        for(int j = 0 ; j < TAM ; j++){
            cin>>B[i][j];
            if(B[i][j]>255 || B[i][j]<0){
                cout<<"Erro! Preencha novamente"<<endl;
            }
        }
    }
}
void zinzA(int R[TAM][TAM], int G[TAM][TAM], int B[TAM][TAM], int cinza[TAM][TAM]){

    int s[TAM][TAM];
        for(int i = 0 ; i < TAM ; i++){
            for(int j = 0 ; j < TAM ; j++){
                s[i][j]=R[i][j]+G[i][j]+B[i][j];
            }
        }
        for(int i = 0 ; i < TAM ; i++){
            for(int j = 0 ; j < TAM ; j++){
                cinza[i][j]=(s[i][j])/3;
            }
        }
}
void negativando(int R[TAM][TAM], int G[TAM][TAM], int B[TAM][TAM],int cinza[TAM][TAM], int negat[TAM][TAM]){

    for(int i = 0 ; i < TAM ; i++){
        for(int j = 0 ; j < TAM; j++){
            negat[i][j]=255-cinza[i][j];
        }
    }
    cout<<"Cinza:"<<endl;
    for(int i = 0 ; i < TAM ; i++){
        for(int j = 0 ; j < TAM ; j++){
            cout<<cinza[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Negativo:"<<endl;
    for(int i = 0 ; i < TAM ; i++){
            for(int j = 0 ; j < TAM ; j++){
                cout<<negat[i][j]<<" ";
            }
            cout<<endl;
    }

}
void posterizando(int cinza[TAM][TAM], int poster[TAM][TAM]){
    for(int i = 0 ; i < TAM ; i++){
        for(int j = 0 ; j < TAM ; j++){
            if(cinza[i][j]>127){
                poster[i][j]=255;
            }else{

                poster[i][j]=0;
            }
        }
    }
    cout<<"Poster:"<<endl;
    for(int i = 0 ; i < TAM ; i++){
            for(int j = 0 ; j < TAM ; j++){
                cout<<poster[i][j]<<" ";
            }
            cout<<endl;
    }
}
