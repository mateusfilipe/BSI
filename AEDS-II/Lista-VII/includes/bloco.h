#ifndef BLOCO_H_INCLUDED
#define BLOCO_H_INCLUDED
struct Bloco{
    char valor;
    Bloco* prox;
    void inicializarBloco(char valorInicial);
};
void Bloco::inicializarBloco(char valorInicial){
    valor = valorInicial;
    prox = NULL;
}


#endif // BLOCO_H_INCLUDED
