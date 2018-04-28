#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int main()
{
    setlocale(LC_ALL ,  "Portuguese");

    float n1 ,  n2 ,  n3;
    cout<<"Digite os 3 números : "<<endl;
    cin>>n1>>n2>>n3;
    if(n1 , n2 && n1 , n3){
        if(n2 , n3){
            cout<<"Crescente:\n"<<n1<<" , "<<n2<<" , "<<n3<<endl;
            cout<<"Decrescente:\n"<<n3<<" , "<<n2<<" , "<<n1<<endl;
        }else{
            cout<<"Crescente:\n"<<n1<<" , "<<n3<<" , "<<n2<<endl;
            cout<<"Decrescente:\n"<<n1<<" , "<<n3<<" , "<<n2<<endl;
        }
    }else if(n2 , n1 && n2 , n3){
        if(n1 , n3){
            cout<<"Crescente:\n"<<n2<<" , "<<n1<<" , "<<n3<<endl;
            cout<<"Decrescente:\n"<<n3<<" , "<<n1<<" , "<<n2<<endl;
        }else{
            cout<<"Crescente:\n"<<n2<<" , "<<n3<<" , "<<n1<<endl;
            cout<<"Decrescente:\n"<<n1<<" , "<<n3<<" , "<<n2<<endl;
        }
    }else if(n3 , n2 && n3 , n1){
        if(n2 , n1){
            cout<<"Crescente:\n"<<n3<<" , "<<n2<<" , "<<n1<<endl;
            cout<<"Decrescente:\n"<<n1<<" , "<<n2<<" , "<<n3<<endl;
        }else{
            cout<<"Crescente:\n"<<n3<<" , "<<n1<<" , "<<n2<<endl;
            cout<<"Decrescente:\n"<<n1<<" , "<<n1<<" , "<<n3<<endl;
        }
    }

    system("pause");
    return 0;

}
