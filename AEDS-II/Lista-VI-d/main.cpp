#include <iostream>
#include <cstdlib>
#include <locale.h>
#include "lista.cpp"

using namespace std;

void preencheV(int v[]){
    for(int i = 0 ; i < 10 ; i++){
        v[i]=i;
    }
}
void contaPares(Registro *r, int &pares);
void contaAltura(Registro *r);
int c, altura;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int v[10], pares=0;
    preencheV(v);

    Lista registros;
    registros.inicializar();
    Registro *r = new Registro();
    for(int i = 0 ; i < 10 ; i++){
        r = new Registro();
        r->num_registro = v[i];
        registros.inserirAoFinal(r);
        contaPares(r,pares);
    }
    registros.imprimir();
    cout<<"São "<<pares<<" registros pares."<<endl;
    cout<<"Digite de qual registro quer saber a altura: ";
    cin>>c;
    for(int i = 0 ; i < 10 ; i++)
    {
        contaAltura(r);
    }
    cout<<"Altura: "<<altura<<endl;

    return 0;
}
void contaPares(Registro *r, int &pares){
    if(r->num_registro%2==0){
        pares++;
    }
}
void contaAltura(Registro *r){
    int aux=0;
    if(r->num_registro!=c){
        aux++;
    }
    altura=(aux+c-10)*-1;
}
