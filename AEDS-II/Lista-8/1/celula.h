#ifndef CELULA_H_INCLUDED
#define CELULA_H_INCLUDED
#include <conio.h>
struct Celula{
    int valor;
    Celula* prox;
    void inicializarCelula(int valorInicial);
};
void Celula::inicializarCelula(int valorInicial){
    valor = valorInicial;
    prox = NULL;
}
#endif // CELULA_H_INCLUDED
