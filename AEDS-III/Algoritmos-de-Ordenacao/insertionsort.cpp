#include <iostream>

using namespace std;
int main(){
  int aux, n, j;
//  cout<<"Tamanho: ";
//  cin>>n;
  n = 6;
  cout<<"Vetor: "<<endl;
  int *vet = new int[n];
  for(int i = 0 ; i < n ; i++){
    cin>>vet[i];
  }
  //Ordena:
  for(int i = n-1 ; i >= 0 ; i--){
    aux = vet[i];
    j = i+2;
      while(j <= n && vet[j] < aux){
        vet[j-1] = vet[j];
        j++;
      }
      vet[j-1] = aux;
  }
  //
  cout<<endl;
  for(int i = 0 ; i < n ; i++){
    cout<<vet[i]<<" ";
  }
}
