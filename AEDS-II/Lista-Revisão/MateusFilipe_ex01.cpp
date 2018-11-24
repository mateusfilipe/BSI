//Mateus Filipe De Lima Souza - BSI

#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

float soma(int a){
    if(a == 1){
        return 1;
    }else{
        return a + soma(a-1);
    }
}

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float N;
    cout<<"Preencha um valor: "<<endl;
    cin>>N;
    cout<<"Soma de 1 a "<<N<<" : "<<soma(N)<<endl;

    system("PAUSE");
    return 0;
}

