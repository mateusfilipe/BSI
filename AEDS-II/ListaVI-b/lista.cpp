#include <iostream>
#include <cstdlib>
#include "lista.h"

using namespace std;

void Lista::inicializar(){
    cabeca = new Cliente();
    cabeca->codigo = -1;
    cabeca->prox = cabeca;
}
//======================================================//
bool Lista::vazia(){
    return(cabeca-> prox == cabeca);
}
//======================================================//
void Lista::inserirAoFinal(Cliente* c){
    if(vazia()){
        cabeca->prox=c;
        c->prox=cabeca;
    }else{
        Cliente* aux = cabeca->prox;
        while(aux->prox != cabeca){
            aux = aux -> prox;
        }
        aux->prox = c;
        c->prox = cabeca;
    }
}
//======================================================//
void Lista::inserirAoInicio(Cliente* c){
    Cliente *aux = cabeca->prox;
    cabeca->prox = c;
    c->prox = aux;
}
//======================================================//
Cliente* Lista::pesquisar(int v){
    if(vazia()){
        return NULL;
    }else{
        Cliente* aux = cabeca -> prox;
        while(aux != cabeca && aux->codigo != v){
            aux = aux->prox;
        }
        return aux;
    }
}
//======================================================//
bool Lista::removerInicio(){
    if(vazia()){
        return false;
    }else{
        Cliente* aux = cabeca->prox;
        cabeca->prox = aux->prox;
        delete aux;
        return true;
    }
}
//======================================================//
bool Lista::removerFinal(){
    if(vazia()){
        return false;
    }else{
        Cliente* ant = cabeca;
        Cliente* atual = cabeca->prox;
        while(atual->prox != cabeca){
            ant = atual;
            atual = atual->prox;
        }
        ant->prox=cabeca;
        atual->prox=NULL;
        delete atual;
        return true;
    }
}
//======================================================//
void Lista::acrescente(){
    int cod;
    cout<<"Onde adicionaremos R$100,00?"<<endl;
    cin>>cod;
    pesquisar(cod)->saldo+=100;
}
//======================================================//
void Lista::conta(){
    Cliente* aux = cabeca->prox;
    int contador = 0;
    while(aux != cabeca){
        contador++;
        aux = aux->prox;
    }
    cout<<"Tem "<<contador<<" clientes cadastrados."<<endl;
}
//======================================================//
void Lista::imprimir(){
    Cliente* aux = cabeca->prox;
    while(aux != cabeca){
        cout<<"Codigo: "<<aux->codigo;
        cout<<", Nome: "<<aux->nome;
        cout<<", Saldo: "<<aux->saldo<<endl;
        aux = aux->prox;
    }
}
//======================================================//
