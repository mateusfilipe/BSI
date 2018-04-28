#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, c, ab, ac, bc, abc, totalEspec,nenhumaNovela;
    cout<<"Qual o total de espectadores: "<<endl;
    cin>>totalEspec;
    cout<<"Digite o número de espectadores da novela A: "<<endl;
    cin>>a;
    cout<<"Digite o número de espectadores da novela B: "<<endl;
    cin>>b;
    cout<<"Digite o número de espectadores da novela C: "<<endl;
    cin>>c;
    cout<<"Digite o número de espectadores da novela A e ao mesmo tempo B: "<<endl;
    cin>>ab;
    cout<<"Digite o número de espectadores da novela A e ao mesmo tempo C: "<<endl;
    cin>>ac;
    cout<<"Digite o número de espectadores da novela B e ao mesmo tempo C: "<<endl;
    cin>>bc;
    cout<<"Digite o número de espectadores da novela A, B e C ao mesmo tempo: "<<endl;
    cin>>abc;


    nenhumaNovela=totalEspec-(a+(b-ab)+(c-ac-(bc-abc)));
    cout<<nenhumaNovela<<" assistem a nenhuma novela.";

    return 0;


}
