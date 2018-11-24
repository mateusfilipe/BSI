#ifndef CELULA_H_INCLUDED
#define CELULA_H_INCLUDED
#include <conio.h>
#include <stdio.h>

using namespace std;

struct Celula{
    string nome;
    int valor;
    Celula* prox;
    void inicializarCelula(int valorInicial, string nIni);
};
void Celula::inicializarCelula(int valorInicial, string nIni){
    nome = nIni;
    valor = valorInicial;
    prox = NULL;
}
#endif // CELULA_H_INCLUDED
