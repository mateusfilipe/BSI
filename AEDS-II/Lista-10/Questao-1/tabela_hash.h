#ifndef TABELA_HASH_H_INCLUDED
#define TABELA_HASH_H_INCLUDED
#include "lista.cpp"
#include "tripulante.h"

struct Tabela_hash{
    int tamanho;
    Lista* vetor_hash;
    void inicializar(int n);
    int funcao_hash(int chave);
    void inserir(int chave, string nome, int idade);
    Tripulante* busca(int chave);
};


#endif // TABELA_HASH_H_INCLUDED
