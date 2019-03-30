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
    for(int i = n+1 ; i >= 0 ; i--){
      C[i+1] = A[i] + B[i];
    }
    for(int j = n+1 ; j >= 0 ; j--){
        if(C[j] == 2){
          if(C[j-1] == 0){
            C[j-1] += 1;
            C[j] = 0;
          }else{

          }
        }
    }

    cout<<"A"; printVetor(A, n);
    cout<<"B"; printVetor(B, n);
    cout<<"C"; printVetor(C, n+1);

    return 0;
}
