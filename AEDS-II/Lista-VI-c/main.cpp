#include "lista.cpp"
#include "lista.h"
#include "aluno.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

void junta(Lista &alunos, Lista &alunosb);

int main(){
    //Primeira Lista:
    Lista alunos;
    alunos.inicializar();
    Aluno *a = new Aluno();
    a->matricula = 10;
    a->nome = "Lona";
    a->notas[0]=10;
    a->notas[1]=10;
    a->notas[2]=10;
    a->notas[3]=10;
    alunos.inserirAoInicio(a);
    //****************************//
    a = new Aluno();
    a->matricula = 11;
    a->nome = "Lana";
    a->notas[0]=1;
    a->notas[1]=2;
    a->notas[2]=3;
    a->notas[3]=9;
    alunos.inserirAoFinal(a);
    //****************************//
    a = new Aluno();
    a->matricula = 12;
    a->nome = "Luna";
    a->notas[0]=3;
    a->notas[1]=2;
    a->notas[2]=1;
    a->notas[3]=3;
    alunos.inserirAoFinal(a);
    //****************************//
    a = new Aluno();
    a->matricula = 13;
    a->nome = "Lina";
    a->notas[0]=7;
    a->notas[1]=7;
    a->notas[2]=7;
    a->notas[3]=7;
    alunos.inserirAoFinal(a);
    //****************************//
    //Segunda Lista:
    Lista alunosb;
    alunosb.inicializar();
    Aluno *b = new Aluno();
    b->matricula = 14;
    b->nome = "Lena";
    b->notas[0]=9;
    b->notas[1]=8;
    b->notas[2]=8;
    b->notas[3]=9;
    alunosb.inserirAoInicio(b);
    //****************************//
    b = new Aluno();
    b->matricula = 15;
    b->nome = "Lisa";
    b->notas[0]=3;
    b->notas[1]=3;
    b->notas[2]=7;
    b->notas[3]=7;
    alunosb.inserirAoFinal(b);
    //****************************//
    cout<<"**********************************************"<<endl;
    cout<<">Questao 4: "<<endl;
    alunos.imprimir();
    cout<<"\n**********************************************"<<endl;
    cout<<">Questao 5:\n"<<endl;
    cout<<"\t Alunos para juntar:\n"<<endl;
    alunosb.imprimir();
    junta(alunos, alunosb);
    cout<<"\n\tDepois de juntar:\n"<<endl;
    alunos.imprimir();
    cout<<"\n**********************************************"<<endl;
    cout<<">Questao 6: (Removendo 11 e 14)"<<endl;
    alunos.removerBusca(11);
    alunos.removerBusca(14);
    alunos.imprimir();
    cout<<"\n**********************************************"<<endl;
    return 0;
}
void junta(Lista &alunos, Lista &alunosb){
    alunos.inserirAoFinal(alunosb.primeiro);
}
