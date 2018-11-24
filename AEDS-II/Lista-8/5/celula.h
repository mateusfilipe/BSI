#ifndef CELULA_H_INCLUDED
#define CELULA_H_INCLUDED

struct Celula{
    int id;
    float tempo;
    Celula* prox;
    void inicializarCelula(int idInicial, float tempoInicial);
};
void Celula::inicializarCelula(int idInicial, float tempoInicial){
    id = idInicial;
    tempo = tempoInicial;
    prox = NULL;
}
#endif // CELULA_H_INCLUDED
