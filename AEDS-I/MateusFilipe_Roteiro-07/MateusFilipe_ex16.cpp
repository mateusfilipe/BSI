 //Mateus Filipe De Lima Souza - 1º Período - BSI

#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

//Vetor:

const int TAM = 0;

//Matriz:

const int L = 100;
const int C = 2;

void menu(){
    cout << setw(70) << setfill('=');
    cout<<"\n";
    cout<<"\tMENU"<<endl;
    cout << setw(70) << setfill('=');
    cout<<"\n";
    cout<<"1 - Cadastrar conta"<<endl;
    cout<<"2 - Imprimir contas cadastradas"<<endl;
    cout<<"3 - Imprimir Saldo de conta específica"<<endl;
    cout<<"4 - Sacar da conta"<<endl;
    cout<<"5 - Depositar em conta"<<endl;
    cout<<"6 - Sair"<<endl;
    cout << setw(70) << setfill('=');
    cout<<"\n";
}

void cadastrar(float conta[L][C], int &nContas); //ASSINATURA DA SUBROTINA
bool achouConta(float conta[L][C], int &nContas, int codigo); //ASSINATURA DA SUBROTINA
void printContas(float conta[L][C], int nContas); //ASSINATURA DA SUBROTINA
float printSaldo(float conta[L][C], int nContas); //ASSINATURA DA SUBROTINA
float saqueConta(float conta[L][C], int nContas, float saque);//ASSINATURA DA SUBROTINA
float depositoConta(float conta[L][C], int nContas, float deposito);//ASSINATURA DA SUBROTINA

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int op, nContas = 0;
    float conta[L][C], saque, deposito;

    do{
        menu();
        cin>>op;
        system("cls"); //Limpa a Tela do DOS
        switch(op){
            case 1:
                cadastrar(conta, nContas);
            break;
            case 2:
                printContas(conta, nContas);
            break;
            case 3:
                cout<<printSaldo(conta, nContas)<<endl;
            break;
            case 4:
                saqueConta(conta,nContas,saque);
            break;
            case 5:
                depositoConta(conta,nContas,deposito);
            break;
        }
    }while(op!=6);

    system("pause");
    return 0;
}
void cadastrar(float conta[L][C], int &nContas){
    int codigo;
    bool achou;
    cout<<"Digite o código da conta a ser cadastrada: "<<endl;
    cin>>codigo;
    achou=achouConta(conta, nContas, codigo);
    if(achou==false){
        conta[nContas][0] = codigo;
        conta[nContas][1] = 0;
        nContas++;
    }else{
        cout<<"Conta já existente!"<<endl;
    }
    system("Pause");
    system("cls");



}

bool achouConta(float conta[L][C], int &nContas, int codigo){
    for(int i = 0 ; i < nContas ; i++){
        if(conta[i][0]==codigo){
            return true;
        }
    }
    return false;
}

void printContas(float conta[L][C], int nContas){
    cout<<"CONTAS CADASTRADAS"<<endl;
    cout<<"Codigo  Saldo"<<endl;
    for(int i = 0 ; i < nContas ; i++){
        cout<<conta[i][0]<<"      "<<conta[i][1]<<endl;
    }
    system("Pause");
}

float printSaldo(float conta[L][C], int nContas){
    float cod, saldoEsp;
    cout<<"Digite a conta que deseja consultar o saldo:"<<endl;
    cin>>cod;
    for(int i = 0 ; i < nContas ; i++){
        if(conta[i][0]==cod){
            saldoEsp=conta[i][1];
            return saldoEsp;
        }
    }
    cout<<"Conta não encontrada"<<endl;


}

float saqueConta(float conta[L][C], int nContas, float saque){
    int cod;
    bool achou;
    cout<<"Digite o codigo da conta que deseja retirar: "<<endl;
    cin>>cod;
    cout<<"Digite quanto deseja sacar:"<<endl;
    cin>>saque;
    for(int i = 0 ; i < nContas ; i++){
        if(conta[i][0]==cod){
            conta[i][1]-=saque;
            return conta[i][1];
        }
    }
    cout<<"Conta não encontrada"<<endl;
}

float depositoConta(float conta[L][C], int nContas, float deposito){
    int cod;
    bool achou;
    cout<<"Digite o codigo da conta que deseja retirar: "<<endl;
    cin>>cod;
    cout<<"Digite quanto deseja depositar:"<<endl;
    cin>>deposito;
    for(int i = 0 ; i < nContas ; i++){
        if(conta[i][0]==cod){
            conta[i][1]+=deposito;
            return conta[i][1];
        }
    }
    cout<<"Conta não encontrada"<<endl;
}
