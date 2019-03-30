//Mateus Filipe de Lima Souza
#include <iostream>
#include <locale.h>

using namespace std;
int contR = 0;
int potencia(int x, int y){
  contR++;
  if(y == 1){
    return x;
  }else if(y == 0){
    return 1;
  }else{
    return x * potencia(x, y-1);
  }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, n, r, contB = 0;
    cin>>a;
    cin>>n;
    r = a;
    for(int i = 1 ; i < n ; i++){
      contB++;
      r *= a;
    }
    cout<<">Dividir-para-conquistar(Recursivo): "<<endl;
    cout<<"-Resultado:"<<potencia(a,n)<<"\n-Passos: "<<contR<<endl;
    cout<<"\n>Fuerza Bruta(Repeticion): "<<r<<endl;
    cout<<"-Resultado:"<<r<<"\n-Passos: "<<contB<<endl;
    return 0;
}
