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
    //Quest�o 1:
    biblioteca.inserir(30, "Treinamento em linguagem C++ - m�dulo 1");
    biblioteca.inserir(25, "Treinamento em linguagem C++ - m�dulo 2");
    biblioteca.inserir(40, "Engenharia de software: uma abordagem profissional");
    biblioteca.inserir(20, "Java como programar");
    biblioteca.inserir(28, "Projeto de algoritmos");
    biblioteca.inserir(35, "Programa��o Web em Java");
    biblioteca.inserir(46, "C completo e total");
    biblioteca.inserir(10, "Use a cabe�a: SQL");
    biblioteca.inserir(27, "Sistemas de banco de dados");
    biblioteca.inserir(44, "Sistemas operacionais modernos");
    biblioteca.inserir(47, "UML � Guia do usu�rio");
    biblioteca.inserir(45, "PHP 5: conceitos e programa��o");
    biblioteca.inserir(60, "Introdu��o � organiza��o de computadores");
    cout<<">Quest�o 2: "<<endl;
    biblioteca.preordem(biblioteca.raiz);

    cout<<"\n>Quest�o 3: "<<endl;
    cout<<"Caso 1 : 10, 27, 35, 45, 60."<<endl;
    cout<<"Caso 2 : 20, 28, 44, 47."<<endl;
    //Quest�o 4:
    biblioteca.remover(20);
    biblioteca.remover(28);
    biblioteca.remover(35);
    biblioteca.remover(44);
    biblioteca.remover(47);
    cout<<endl;
    cout<<">Quest�o 5: (Ap�s a remo��o dos elementos, 20, 28, 35, 44, 47) "<<endl;
    biblioteca.preordem(biblioteca.raiz);
    return 0;
    system ("pause");

}
