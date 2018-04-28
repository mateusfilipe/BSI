#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");

    for(int i = 100; i>=1 ; i--){
        cout<<i<<endl;
    }


    system("pause");
    return 0;

}
