#ifndef No_H_INCLUDED
#define No_H_INCLUDED
#include <stdio.h>

using namespace std;

struct No{
    int valor;
    No* direita;
    No* esquerda;
    void inicializarNo(int valorInicial);
};
void No::inicializarNo(int valorInicial){
    valor = valorInicial;
}
#endif // No_H_INCLUDED
