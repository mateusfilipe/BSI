#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL , "Portuguese");
    int voto, branco=0, nulo=0, c1=0, c2=0, c3=0, c4=0;
    do{
        cout<<"Digite seu voto:"<<endl;
        cin>>voto;
        if(voto == 1){
            c1++;
        }else if(voto == 2){
            c2++;
        }else if(voto == 3){
            c3++;
        }else if(voto == 4){
            c4++;
        }else if(voto == 5){
            branco++;
        }else{
            nulo++;
        }
    }while(voto!=0);
    cout<<"Candidato 1: "<<c1<<endl;
    cout<<"Candidato 2: "<<c2<<endl;
    cout<<"Candidato 3: "<<c3<<endl;
    cout<<"Candidato 4: "<<c4<<endl;
    cout<<"Em branco : "<<branco<<endl;
    cout<<"Nulos : "<<nulo<<endl;

    system("pause");
    return 0;

}
