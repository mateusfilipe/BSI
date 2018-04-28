#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num, numQuadrado, numCubo, numRaizQ, numRaizC;
    cout<<"Digite um número: "<<endl;
    cin>>num;
    numQuadrado=pow(num,2);
    numCubo=pow(num,3);
    numRaizQ=sqrt(num);
    numRaizC=cbrt(num);

    cout<<"Elevado ao quadrado: "<<numQuadrado<<endl;
    cout<<"Elevado ao cubo: "<<numCubo<<endl;
    cout<<"Raiz qudradada: "<<numRaizQ<<endl;
    cout<<"Raiz cúbica: "<<numRaizC<<endl;
    return 0;


}
