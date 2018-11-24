#ifndef Livro_H_INCLUDED
#define Livro_H_INCLUDED
#include <stdio.h>

using namespace std;

struct Livro{
    int valor;
    string nome;
    Livro* direita;
    Livro* esquerda;
    void inicializarLivro(int valorInicial, string nomeInicial);
};
void Livro::inicializarLivro(int valorInicial, string nomeInicial){
    valor = valorInicial;
    nome = nomeInicial;
}
#endif // Livro_H_INCLUDED
