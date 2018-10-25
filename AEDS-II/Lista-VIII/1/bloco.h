#ifndef BLOCO_H_INCLUDED
#define BLOCO_H_INCLUDED
struct Bloco{
    int valor;
    Bloco* prox;
    void inicializarBloco(int valorInicial);
};
void Bloco::inicializarBloco(int valorInicial){
    valor = valorInicial;
    prox = NULL;
}


#endif // BLOCO_H_INCLUDED
