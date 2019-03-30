//Mateus Filipe de Lima Souza
#include <iostream>
#include <locale.h>

using namespace std;

void printVetor(int V[], int tam){
  cout<<"[ ";
  for(int i = 0 ; i < tam ; i++){
    cout<<V[i]<<" ";
  }
  cout<<"]"<<endl;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n;

    cout<<"Tamanho: ";
    cin>>n;

    int *A = new int[n];
    int *B = new int[n];
    int *C = new int[n+1];

    cout<<"Preencha A: "<<endl;
    for(int i = 0 ; i < n ; i++){
      cin>>A[i];
    }
    cout<<"Preencha B: "<<endl;
    for(int i = 0 ; i < n ; i++){
      cin>>B[i];
    }
    //Preenche C com 0:
    for(int i = 0 ; i < n+1 ; i++){
      C[i] = 0;
    }
    //Executa a soma binária:
    int aux = 0, soma = 0;
    for(int i = n ; i >= 0 ; i--){
        soma = A[i-1]+B[i-1]+aux;
        if(soma <= 1){
          aux = 0;
          C[i] = soma;
        }else if(soma == 2){
          aux = 1;
          C[i] = 0;
        }else if(soma == 3){
          aux = 1;
          C[i] = 1;
        }
    }
    C[0] = aux;
    //-----------------------

    cout<<"A"; printVetor(A, n);
    cout<<"B"; printVetor(B, n);
    cout<<"C"; printVetor(C, n+1);

    return 0;
}
