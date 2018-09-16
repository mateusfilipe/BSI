#include <iostream>
#include "lista.cpp"

using namespace std;

int main(){
    Lista clientes;
    clientes.inicializar();
    Cliente *c = new Cliente();
    c->codigo = 10;
    c->nome = "Aline Costa";
    c->saldo = 2570.44;
    clientes.inserirAoInicio(c);

    c = new Cliente();
    c->codigo = 11;
    c->nome = "Mario Souza";
    c->saldo = 3994.12;
    clientes.inserirAoFinal(c);

    c = new Cliente();
    c->codigo = 12;
    c->nome = "Jorge Moura";
    c->saldo = 9057.11;
    clientes.inserirAoFinal(c);

    cout<<"********************************************************************\n"<<endl;
    cout<<">Questao 04 (Imprimir clientes cadastrados): \n"<<endl;
    clientes.imprimir();
    cout<<"\n********************************************************************\n"<<endl;
    cout<<">Questao 05 (Adicionando R$100,00 a um cliente): \n"<<endl;
    clientes.acrescente();
    clientes.imprimir();
    cout<<"\n********************************************************************\n"<<endl;
    cout<<">Questao 06 (Conta a quantidade de clientes cadastrados): \n"<<endl;
    clientes.conta();
    cout<<"\n********************************************************************\n"<<endl;
    cout<<">Questao 07 (Remove 2 clientes, 1 no inicio e 1 no final): \n"<<endl;
    cout<<"--Antes da remocao:\n"<<endl;
    clientes.imprimir();
    clientes.removerInicio();
    clientes.removerFinal();
    cout<<"--Apos a remocao:\n"<<endl;
    clientes.imprimir();
    cout<<"\n********************************************************************\n"<<endl;
}
