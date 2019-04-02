#include <iostream>

using namespace std;
int main(){
  int n, j;
//  cout<<"Tamanho: ";
//  cin>>n;
  n = 6;
  cout<<"Vetor: "<<endl;
  int *vet = new int[n];
  for(int i = 0 ; i < n ; i++){
    cin>>vet[i];
  }
  int cont = 0;
  //Ordena:
  int aux;
  for(int i = n-1 ; i >= 0 ; i--){
    cont++;
    aux = vet[i];
    j = i+1;
    cout<<"aux: "<<aux<<endl;
    cout<<"i: "<<i<<endl;
    cout<<"j: "<<j<<endl;
      while(j < n && vet[j] < aux){
        cont++;
        vet[j-1] = vet[j];
        j++;
      }
      vet[j-1] = aux;
  }
  //-------
  cout<<endl;
  for(int i = 0 ; i < n ; i++){
    cout<<vet[i]<<" ";
  }
  cout<<cont<<endl;
}
