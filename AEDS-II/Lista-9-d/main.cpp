#include<iostream>
#include<locale.h>
#include<windows.h>
#include "arvore.cpp"

using namespace std;

void letraA();
void letraB();
void letraC();
void letraD();
void letraE();

int main ()
{
    setlocale(LC_ALL, "portuguese");


    //QUESTÃO - 1
    letraA();
    letraB();
    letraC();
    letraD();
    letraE();


    return 0;
    system ("pause");

}
void letraA()
{
    //a)
    cout<<"Letra a): "<<endl;
    Arvore arvA;
    arvA.inicializar();
    arvA.inserir(30);
    arvA.inserir(40);
    arvA.inserir(24);
    arvA.inserir(58);
    arvA.inserir(48);
    arvA.inserir(26);
    arvA.inserir(11);
    arvA.inserir(13);
    arvA.inserir(14);
    cout<<">Antes da Rotação: "<<endl;
    arvA.preordem(arvA.raiz);
    arvA.rotacaoSE(11);
    cout<<">Após a Rotação: "<<endl;
    arvA.preordem(arvA.raiz);
    cout<<"=================="<<endl;
}
void letraB()
{
    //b)
    cout<<"Letra b): "<<endl;
    Arvore arvB;
    arvB.inicializar();
    arvB.inserir(20);
    arvB.inserir(15);
    arvB.inserir(25);
    arvB.inserir(10);
    arvB.inserir(30);
    arvB.inserir(24);
    arvB.inserir(17);
    arvB.inserir(12);
    arvB.inserir(5);
    arvB.inserir(3);
    cout<<">Antes da Rotação: "<<endl;
    arvB.preordem(arvB.raiz);
    arvB.rotacaoSD(15);
    cout<<">Após a Rotação: "<<endl;
    arvB.preordem(arvB.raiz);
    cout<<"=================="<<endl;
}
void letraC()
{
    //c)
    cout<<"Letra c): "<<endl;
    Arvore arvC;
    arvC.inicializar();
    arvC.inserir(40);
    arvC.inserir(30);
    arvC.inserir(50);
    arvC.inserir(45);
    arvC.inserir(55);
    arvC.inserir(52);
    cout<<">Antes da Rotação: "<<endl;
    arvC.preordem(arvC.raiz);
    arvC.rotacaoSE(40);
    cout<<">Após a Rotação: "<<endl;
    arvC.preordem(arvC.raiz);
    cout<<"=================="<<endl;
}
void letraD()
{
    //d)
    cout<<"Letra d): "<<endl;
    Arvore arvD;
    arvD.inicializar();
    arvD.inserir(20);
    arvD.inserir(15);
    arvD.inserir(25);
    arvD.inserir(12);
    arvD.inserir(17);
    arvD.inserir(24);
    arvD.inserir(30);
    arvD.inserir(10);
    arvD.inserir(14);
    arvD.inserir(13);
    cout<<">Antes da Rotação: "<<endl;
    arvD.preordem(arvD.raiz);
    arvD.rotacaoDD(12,15);
    cout<<">Após a Rotação: "<<endl;
    arvD.preordem(arvD.raiz);
    cout<<"=================="<<endl;
}

void letraE()
{
    //e)
    Arvore arvE;
    cout<<"Letra e): "<<endl;
    arvE.inicializar();
    arvE.inserir(20);
    arvE.inserir(15);
    arvE.inserir(25);
    arvE.inserir(12);
    arvE.inserir(17);
    arvE.inserir(30);
    arvE.inserir(26);
    cout<<">Antes da Rotação: "<<endl;
    arvE.preordem(arvE.raiz);
    arvE.rotacaoDE(30,25);
    cout<<">Após a Rotação: "<<endl;
    arvE.preordem(arvE.raiz);
    cout<<"=================="<<endl;
}
