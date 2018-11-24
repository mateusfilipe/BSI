#include<iostream>
#include<locale.h>
#include<windows.h>
#include "arvore.cpp"

using namespace std;

int main ()
{
    setlocale(LC_ALL, "portuguese");

    Arvore arvore;
    arvore.inicializar();

    arvore.inserir(14); //Raiz Primária

    arvore.inserir(4);   // Subraiz Esquerda de 14
    arvore.inserir(15);  // Subraiz Direita de 14

    arvore.inserir(9);   // Subraiz Direita de 4
    arvore.inserir(3);   // Subraiz Esquerda de 4

    arvore.inserir(7);   // Subraiz Esquerda de 9
    arvore.inserir(9);   // Subraiz Direita de 9

    arvore.inserir(5);
    arvore.inserir(4);

    arvore.inserir(5);
    arvore.inserir(14);

    arvore.inserir(18);
    arvore.inserir(16);

    arvore.inserir(20);
    arvore.inserir(17);

    //Questão - 1 :
    cout<<"Questão 1: "<<endl;
    arvore.preordem(arvore.raiz);
    cout<<endl;

    //Questão - 2 :
    arvore.inserir(2);
    arvore.inserir(90);

    arvore.inserir(30);
    arvore.inserir(10);

    arvore.inserir(12);
    arvore.inserir(23);

    arvore.inserir(19);
    cout<<"Questão 2: "<<endl;
    arvore.preordem(arvore.raiz);
    cout<<endl;

    //Questão - 3 :
    cout<<"Questão 3: "<<endl;
    arvore.preordem(arvore.raiz);
    cout<<endl;

    //Questão - 4 :
    cout<<"Questão 4 - \n>Em ordem: "<<endl;
    arvore.emordem(arvore.raiz);
    cout<<"\n>Pós ordem: "<<endl;
    arvore.posordem(arvore.raiz);
    cout<<endl;

    //Questão - 5 :
    cout<<"-Pre-ordem: "<<endl;
    arvore.preordem(arvore.raiz);
    cout<<"-Em-ordem: "<<endl;
    arvore.emordem(arvore.raiz);
    cout<<"-Pós-ordem: "<<endl;
    arvore.posordem(arvore.raiz);
    return 0;
    system ("pause");

}
