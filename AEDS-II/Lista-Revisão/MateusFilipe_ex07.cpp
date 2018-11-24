//Mateus Filipe De Lima Souza - BSI

#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

int eleva(int k, int n){
    if (k == 1 || n == 0){
        return 1;
    }else{
        return k * eleva(k, n-1);
    }
}

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int k, n;
    cout<<"Digite a base depois o expoente: "<<endl;
    cin>>k>>n;
    cout<<k<<" elevado a "<<n<<" = "<<eleva(k,n)<<endl;
    system("PAUSE");
    return 0;
}

