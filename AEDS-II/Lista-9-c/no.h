#ifndef No_H_INCLUDED
#define No_H_INCLUDED
#include <stdio.h>

using namespace std;

struct No{
    int valor;
    string nome;
    No* direita;
    No* esquerda;
    void inicializarNo(int valorInicial, string nomeInicial);
};
void No::inicializarNo(int valorInicial, string nomeInicial){
    valor = valorInicial;
    nome = nomeInicial;
}
#endif // No_H_INCLUDED
