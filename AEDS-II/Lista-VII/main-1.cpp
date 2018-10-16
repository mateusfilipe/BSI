#include <iostream>
#include <cstring>
#include <locale.h>
#include "includes/pilha.cpp"

using namespace std;
bool expressaoBeleza(char* cadeia);
int main(){
    setlocale(LC_ALL,"Portuguese");
    char *expressao = "()(){}[][][[[[[[]";
    if(expressaoBeleza(expressao)){
        cout<<"Expressão correta."<<endl;
    }else{
        cout<<"Expressão incorreta."<<endl;
    }
}
bool expressaoBeleza(char* cadeia){
    Pilha pilha1;
    Pilha pilha2;
    Pilha pilha3;

    int cont[6] = {0,0,0,0,0,0};

    pilha1.inicializar();
    pilha2.inicializar();
    pilha3.inicializar();

    for(int i = 0 ; i < strlen(cadeia); i++){
        if(cadeia[i]=='('){
            pilha1.empilhar(cadeia[i]);
            cont[0]++;
        }
        if(cadeia[i]==')'){
            pilha1.empilhar(cadeia[i]);
            cont[1]++;
        }
        if(cadeia[i]=='{'){
            pilha2.empilhar(cadeia[i]);
            cont[2]++;
        }
        if(cadeia[i]=='}'){
            pilha2.empilhar(cadeia[i]);
            cont[3]++;
        }
        if(cadeia[i]=='['){
            pilha3.empilhar(cadeia[i]);
            cont[4]++;
        }
        if(cadeia[i]==']'){
            pilha3.empilhar(cadeia[i]);
            cont[5]++;
        }
    }
    bool achou = false;
    for(int i = 0 ; i < 6 ; i=i+2){
        if(cont[i]==cont[i+1]){
            achou=true;
        }else{
            achou=false;
        }
    }
    return achou;

}
