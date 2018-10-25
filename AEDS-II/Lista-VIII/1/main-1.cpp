#include <iostream>
#include <locale.h>
#include "fila.cpp"
#include "pilha.cpp"

using namespace std;

void inverteFila();
    Fila F1;
    Pilha P1;

int main(){
    setlocale(LC_ALL, "");
    F1.inicializar();
    P1.inicializar();

    for(int i = 1 ; i <= 5 ; i++){
        F1.inserir(i);
    }
    cout<<"-Antes de inverter: "<<endl;
    F1.imprimir();
    inverteFila();
    cout<<"\n-Depois de inverter: "<<endl;
    F1.imprimir();

    return 0;
}
void inverteFila(){
    Celula* auxF = F1.primeiro;
    while(auxF!=NULL){
        P1.empilhar(auxF->valor);
        auxF= auxF->prox;
    }
    F1.esvaziar();

    Bloco * auxP = P1.topo;
    while(auxP!=NULL){
        F1.inserir(auxP->valor);
        auxP= auxP->prox;
    }
    P1.esvaziar();
}
