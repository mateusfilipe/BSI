#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int n;
    cout<<"Digite até onde deseja ir com a tabuada:"<<endl;
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        cout<<endl;
        cout<<"Tabuada do "<<i<<endl;
        cout<<endl;
        for(int j = 1 ; j <= 9 ; j++){
            cout<<i<<" x "<<j<<" = "<<j*i<<endl;
        }
    }

    system("pause");
    return 0;

}
