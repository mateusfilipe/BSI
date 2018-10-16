//Mateus Filipe De Lima Souza - BSI

#include <iostream>
#include <windows.h>
#include <locale.h>
#include "lista.cpp"
using namespace std;

void n3(){
//--Questão número 3:
    Lista funcionarios;
    funcionarios.inicializar();
    Funcionario *f = new Funcionario();
    f->matricula = 100;
    f->nome = "Fulano";
    f->salario = 954.33;
    funcionarios.inserirAoInicio(f);
    funcionarios.imprimir();
}
void n4(){
//--Questão número 4:
    Lista funcionarios;
    funcionarios.inicializar();

    Funcionario *f = new Funcionario();
    f->matricula = 101;
    f->nome = "F1";
    f->salario = 1204.21;
    funcionarios.inserirAoFinal(f);

    f = new Funcionario();
    f->matricula = 102;
    f->nome = "F2";
    f->salario = 1370.43;
    funcionarios.inserirAoFinal(f);

    f = new Funcionario();
    f->matricula = 103;
    f->nome = "I2";
    f->salario = 2051.11;
    funcionarios.inserirAoInicio(f);

    f = new Funcionario();
    f->matricula = 104;
    f->nome = "I1";
    f->salario = 3574.00;
    funcionarios.inserirAoInicio(f);

    funcionarios.imprimir();
}
void n5(){
//--Questão número 5:
    Lista funcionarios;
    funcionarios.inicializar();
    Funcionario *f = new Funcionario();

    f->matricula = 101;
    f->nome = "Mario";
    f->salario = 1204.21;
    funcionarios.inserirAoFinal(f);

    f = new Funcionario();
    f->matricula = 102;
    f->nome = "Marina";
    f->salario = 1370.43;
    funcionarios.inserirAoFinal(f);

    f = new Funcionario();
    f->matricula = 103;
    f->nome = "Marcio";
    f->salario = 2051.11;
    funcionarios.inserirAoInicio(f);

    f = new Funcionario();
    f->matricula = 104;
    f->nome = "Mateus";
    f->salario = 3574.00;
    funcionarios.inserirAoInicio(f);

    int p;
    cout<<"Pesquise: ";
    cin>>p;
    if(funcionarios.pesquisar(p)==NULL){
        cout<<"Funcionario nao encontrado."<<endl;
    }else{
        Funcionario* v = funcionarios.pesquisar(p);
        cout<<v->nome<<endl;
    }

}
void n6(){
//--Questão número 6:
    Lista funcionarios;
    funcionarios.inicializar();
    Funcionario *f = new Funcionario();

    f->matricula = 105;
    f->nome = "Carlos";
    f->salario = 304.21;
    funcionarios.inserirAoFinal(f);

    f = new Funcionario();
    f->matricula = 106;
    f->nome = "Caio";
    f->salario = 270.43;
    funcionarios.inserirAoFinal(f);

    f = new Funcionario();
    f->matricula = 107;
    f->nome = "Celio";
    f->salario = 151.11;
    funcionarios.inserirAoInicio(f);
    cout<<endl;
    cout<<"---Antes da remoção: "<<endl;
    funcionarios.imprimir();

    funcionarios.removerInicio();
    funcionarios.removerFinal();
    cout<<endl;
    cout<<"---Após a remoção: "<<endl;
    funcionarios.imprimir();



}
int main(){
    setlocale(LC_ALL,"Portuguese");
    cout<<"================================"<<endl;
    cout<<">Questão 03:"<<endl;
    n3();
    cout<<"================================"<<endl;
    cout<<">Questão 04:"<<endl;
    n4();
    cout<<"================================"<<endl;
    cout<<">Questão 05:"<<endl;
    n5();
    cout<<"================================"<<endl;
    cout<<">Questão 06:"<<endl;
    n6();
    cout<<"================================"<<endl;

    system("PAUSE");
    return 0;
}
