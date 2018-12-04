#include<iostream>
#include<locale.h>
#include<windows.h>
#include "arvore.cpp"

using namespace std;

int main ()
{
    setlocale(LC_ALL, "portuguese");

    Arvore dep;
    dep.inicializar();

    dep.inserir(15, "Aline Alves Campos");
    dep.inserir(10, "Andrea Cristina Oliveira Alves");
    dep.inserir(20, "Cíntia Siqueira Araujo Soares");
    dep.inserir(6, "Davi Borges de Oliveira");
    dep.inserir(12, "Eduardo Almeida Soares");
    dep.inserir(18, "Fabiana Ferreira da Silva");
    dep.inserir(25, "Guilherme Francis de Noronha");
    dep.inserir(5, "Leandro Ribeiro Galvao");
    dep.inserir(9, "Leonardo Fernandes Bernardes");
    dep.inserir(16, "Marcos Antonio Alves");
    dep.inserir(19, "Mateus Vilela Souza");
    dep.inserir(30, "Ricardo Augusto Oliveira Santos");
    dep.inserir(8, "Rui Ferreira da Silva Neto");
    dep.inserir(17, "Sergio Menezes de Andrade");
    dep.inserir(27, "Samara Bezerra Martins");

    dep.preordem(dep.raiz);
    cout<<"========================================"<<endl;
    dep.remover(15, "Aline Alves Campos");
    dep.remover(10, "Andrea Cristina Oliveira Alves");
    dep.remover(20, "Cíntia Siqueira Araujo Soares");
    dep.remover(18, "Fabiana Ferreira da Silva");
    dep.remover(6, "Davi Borges de Oliveira");
    dep.preordem(dep.raiz);

    return 0;
    system ("pause");

}
