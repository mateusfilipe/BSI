#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include <string>

using namespace std;

struct Cliente{
    int codigo;
    string nome;
    float saldo;
    Cliente* prox;
};


#endif // CLIENTE_H_INCLUDED
