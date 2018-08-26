//Mateus Filipe De Lima Souza - BSI

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cstdlib>

using namespace std;

void preenche(int *v, int N){
    for(int i = 0 ; i < N ; i++)
        v[i] = rand()%10;
}

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int N, *v;
    cout<<"Digite o tamanho do vetor: "<<endl;
    cin>>N;
    v = new int[N];
    preenche(v,N);
    cout<<"Vetor: ";
    for(int i = 0 ; i < N ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    delete []v;
    system("PAUSE");
    return 0;
}
