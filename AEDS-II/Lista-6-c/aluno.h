#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include <string>
using namespace std;
struct Aluno{
    int matricula;
    string nome;
    float notas[4];
    Aluno *ant;
    Aluno *prox;
};


#endif // ALUNO_H_INCLUDED
