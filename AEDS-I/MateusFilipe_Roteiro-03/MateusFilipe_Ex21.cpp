#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>


using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int dia1, dia2, mes1, mes2, ano1, ano2;
    cout<<"Digite a primeira data(dia/m�s/ano): "<<endl;
    cin>>dia1>>mes1>>ano1;
    cout<<"Digite a segunda data(dia/m�s/ano): "<<endl;
    cin>>dia2>>mes2>>ano2;

    if(ano1>ano2)
    {
        cout<<"A primeira data � maior."<<endl;
    }
    else if(ano2>ano1)
    {
        cout<<"A segunda data � maior."<<endl;
    }
    else
    {
        if(mes1>mes2)
        {
            cout<<"A primeira data � maior."<<endl;
        }
        else if(mes2>mes1)
        {
            cout<<"A segunda data � maior."<<endl;
        }
        else
        {
            if(dia1>dia2)
            {
                cout<<"A primeira data � maoir."<<endl;
            }
            else if(dia2>dia1)
            {
                cout<<"A segunda data � maior."<<endl;
            }
            else
            {
                cout<<"As datas s�o igaus."<<endl;
            }
        }
    }

    system("pause");
    return 0;

}
