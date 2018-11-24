#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED
struct No{
    int valor;
    No* direita;
    No* esquerda;
    void inicializarNo(int valorInicial);
};
void No::inicializarNo(int valorInicial){
    valor = valorInicial;
}
#endif // NO_H_INCLUDED
