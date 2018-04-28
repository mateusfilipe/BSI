#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");

    long long cpf, dv, v1=0, v2=0, d;
    cout<<"Digite os 9 primeiros digitos do seu CPF: "<<endl;
    cin>>cpf;
    cout<<"Digite os 2 digitos verificadores do seu CPF: "<<endl;
    cin>>dv;
    cout<<cpf<<dv<<endl;
    for(int i = 0 ; i < 9 ; i ++){
        d = cpf%10;
        cpf /= 10;
        v1 = v1 + d*(9 - (i%10) );
        v2 = v2 + d*(9 - ((i+1)%10) );
    }
    v1 = (v1%11)%10;
    v2 = (((v2+v1*9)%11)%10);

    cout<<"V1 = "<<v1<<endl;
    cout<<"V2 = "<<v2<<endl;
    if(dv==v1*10+v2){
        cout<<"CPF válido!";
    }else{
        cout<<"CPF inválido!";
    }
        return 0;
}
