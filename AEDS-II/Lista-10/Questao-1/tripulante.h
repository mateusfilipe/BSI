#ifndef CELULA_H_INCLUDED
#define CELULA_H_INCLUDED
#include <string>

using namespace std;
struct Tripulante{
    int chave;
    string nome;
    int idade;
    Tripulante* prox;
    void inicializarCelula(int c, string n, int i);
};
void Tripulante::inicializarCelula(int c, string n, int i){
    chave = c;
    nome = n;
    idade = i;
    prox = NULL;
}
#endif // CELULA_H_INCLUDED
