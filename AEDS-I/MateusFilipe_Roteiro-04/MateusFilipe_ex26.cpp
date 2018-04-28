#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    float n;
    cout<<"Digite até onde deseja ir com a pirâmide: "<<endl;
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        cout<<endl;
        for(int j = 1 ; j<=i ; j++){
            cout<<"#";
        }
    }
    cout<<endl;
    system("pause");
    return 0;

}
