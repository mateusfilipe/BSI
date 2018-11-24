#include<iostream>
#include<locale.h>
#include<windows.h>
#include "arvore.cpp"

using namespace std;

int main ()
{
    setlocale(LC_ALL, "portuguese");

    Arvore biblioteca;
    biblioteca.inicializar();
    //Questão 1:
    biblioteca.inserir(30, "Treinamento em linguagem C++ - módulo 1");
    biblioteca.inserir(25, "Treinamento em linguagem C++ - módulo 2");
    biblioteca.inserir(40, "Engenharia de software: uma abordagem profissional");
    biblioteca.inserir(20, "Java como programar");
    biblioteca.inserir(28, "Projeto de algoritmos");
    biblioteca.inserir(35, "Programação Web em Java");
    biblioteca.inserir(46, "C completo e total");
    biblioteca.inserir(10, "Use a cabeça: SQL");
    biblioteca.inserir(27, "Sistemas de banco de dados");
    biblioteca.inserir(44, "Sistemas operacionais modernos");
    biblioteca.inserir(47, "UML – Guia do usuário");
    biblioteca.inserir(45, "PHP 5: conceitos e programação");
    biblioteca.inserir(60, "Introdução à organização de computadores");
    cout<<">Questão 2: "<<endl;
    biblioteca.preordem(biblioteca.raiz);

    cout<<"\n>Questão 3: "<<endl;
    cout<<"Caso 1 : 10, 27, 35, 45, 60."<<endl;
    cout<<"Caso 2 : 20, 28, 44, 47."<<endl;
    //Questão 4:
    biblioteca.remover(20);
    biblioteca.remover(28);
    biblioteca.remover(35);
    biblioteca.remover(44);
    biblioteca.remover(47);
    cout<<endl;
    cout<<">Questão 5: (Após a remoção dos elementos, 20, 28, 35, 44, 47) "<<endl;
    biblioteca.preordem(biblioteca.raiz);
    return 0;
    system ("pause");

}
