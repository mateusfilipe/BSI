#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int minutos1, minutos2, horas;
    cout<<"Digite os minutos: "<<endl;
    cin>>minutos1;
    horas=minutos1/60;
    minutos2=minutos1%60;
    cout<<horas<<" horas e "<<minutos2<<"minutos";
    return 0;


}
