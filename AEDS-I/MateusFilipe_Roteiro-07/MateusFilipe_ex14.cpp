 //Mateus Filipe De Lima Souza - 1º Período - BSI
/*
    Exemplo de Teste{

    }
*/
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>
#include <string>

//Vetor:

const int TAM = 100;

//Matriz:

const int L = 3;
const int C = 3;

using namespace std;

void preencheVetor(int v[TAM], int a){
    for(int i = 0 ; i < a ; i++){
        cin>>v[i];
    }
}
void imprimeVetor(int v[TAM], int a){
    for(int i = 0 ; i < a ; i++){
        cout<<v[i]<<" | ";
    }
    cout<<endl;
}
void intercalaVetor(int A[TAM], int B[TAM], int C[TAM], int nA, int nB, int nC);

void comuns(int A[TAM], int B[TAM], int C[TAM], int nA, int nB, int &nC);

void distintos(int A[TAM], int B[TAM], int C[TAM], int nA, int nB, int &nC);

void letraF(int A[TAM], int B[TAM],int nA, int nB);



int main()
{
    setlocale(LC_ALL , "Portuguese");
    int A[TAM], B[TAM], C[TAM], nA, nB, nC=0, D[TAM], nD=0, sR[TAM], sRc=0 ;

    cout<<"A(n): "<<endl;
    cin>>nA;
    cout<<"B(m): "<<endl;
    cin>>nB;
    nC=nA+nB;
    preencheVetor(A, nA);
    preencheVetor(B, nB);
    intercalaVetor( A, B, C, nA, nB,nC);
    cout<<"A: ";
    imprimeVetor(A, nA);
    cout<<"B: ";
    imprimeVetor(B, nB);
    cout<<"Intercalado: ";
    imprimeVetor(C, nC);
    cout<<endl;
    comuns(A, B, D, nA, nB, nD);
    cout<<"Comuns: ";
    imprimeVetor(D, nD);
    distintos(A,B,sR,nA,nB,sRc);
    cout<<"Distintos: ";
    imprimeVetor(sR,sRc);

    letraF(A,B,nA,nB);
    system("PAUSE");
    return 0;
}
void intercalaVetor(int A[TAM], int B[TAM], int C[TAM], int nA, int nB, int nC){
    for(int iA=0, iB=0, iC=0; iC<nC; iA++, iB++){
        if(iA<nA and iB<nB){
            C[iC]=A[iA];
            iC++;
            C[iC]=B[iB];
            iC++;
        }else if(iA >= nA){
            C[iC]=B[iB];
            iC++;
        }else if(iB>=nB){
            C[iC]=A[iA];
            iC++;
        }
    }
}
void comuns(int A[TAM], int B[TAM], int D[TAM], int nA, int nB, int &nD){

    for(int i = 0 ; i < nA ; i++){
        for(int j = 0 ; j < nB ; j++){
            if(A[i]==B[j]){
                if(nD==0){
                    D[nD]=A[i];
                    nD++;
                }else{
                    bool achou = false;
                    for(int z=0; z<nD; z++){
                        if(A[i]==D[z]){
                            achou = true;
                        }
                    }
                    if(achou==false){
                        D[nD]=A[i];
                        nD++;
                    }
                }
            }
        }
    }
}
void distintos(int A[TAM], int B[TAM], int sR[TAM], int nA, int nB, int &sRc){
    for(int i = 0 ; i < nA ; i++){
        sR[i]=A[i];
        sRc++;
    }
    for(int i = 0 ; i < nB ; i++){
        bool achou1=false;
        for(int j = 0 ; j < nA ; j++){
            if(B[i]==sR[i]){
                achou1 = true;
            }
        }
        if(achou1==false){
            sR[i]=B[i];
            sRc++;
        }
    }
    cout<<endl;
}
void letraF(int A[TAM], int B[TAM], int nA, int nB){
    int fC[100], fD[100], fnC, fnD, aUb[100], cUd[100], fnAB=0, fnCD=0, f[100], nF = 0;
    cout<<"Digite o tamanho de C: "<<endl;
    cin>>fnC;
    cout<<"Agora preencha C: "<<endl;
    preencheVetor(fC, fnC);
    cout<<"Digite o tamanho de D: "<<endl;
    cin>>fnD;
    cout<<"Agora preencha D: "<<endl;
    preencheVetor(fD, fnD);

    distintos(A,B,aUb,nA,nB,fnAB);
    distintos(fC,fD,cUd,fnC,fnD,fnCD);
    comuns(aUb,cUd,f,fnAB,fnCD, nF);
    cout<<"(AUB)interceção(CUD):"<<endl;
    imprimeVetor(f, nF);
}
