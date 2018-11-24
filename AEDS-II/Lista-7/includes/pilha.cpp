#include <iostream>
#include <cstdlib>
#include "pilha.h"

using namespace std;

//=====================================================//
bool Pilha::vazia(){
    return(topo==NULL);
}
//=====================================================//
void Pilha::inicializar(){
    topo = NULL;
    quantidade = 0;
}
//=====================================================//
void Pilha::empilhar(char elemento){
    Bloco* novo = new Bloco();
    if(novo == NULL){
        cout<<"Nao ha memoria disponivel!"<<endl;
    }else{
        novo->inicializarBloco(elemento);
        novo->prox=topo;
        topo = novo;
        quantidade++;
    }
}
//=====================================================//
bool Pilha::desempilhar(){
    if(vazia())
        cout<<"Nao ha blocos na pilha."<<endl;
    else{
        Bloco* aux=topo;
        topo=topo->prox;
        delete aux;
        quantidade--;
        return true;
    }
}
//=====================================================//
void Pilha::esvaziar(){
    while(!vazia())
        desempilhar();
}
//=====================================================//
void Pilha::imprimir(){
    if(vazia()){
        cout<<"Nao ha blocos na pilha."<<endl;
    }else{
        Bloco*aux = topo;
        while(aux!=NULL){
            cout<<aux->valor;
            aux=aux->prox;
        }
    }
}
//=====================================================//
