#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    int v[10], soma=0;
    for(int i = 0 ; i<10 ;  i++){
        cout<<"Digite os números: "<<endl;
        cin>>v[i];
        soma+=pow(v[i],2);
    }
    cout<<"Soma: "<<soma<<endl;

    system("pause");
    return 0;

}
