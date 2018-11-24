#ifndef BLOCO_H_INCLUDED
#define BLOCO_H_INCLUDED
#include <stdio.h>

using namespace std;

struct Bloco{
    string valor;
    Bloco* prox;
    void inicializarBloco(string valorInicial);
};
void Bloco::inicializarBloco(string valorInicial){
    valor = valorInicial;
    prox = NULL;
}


#endif // BLOCO_H_INCLUDED
