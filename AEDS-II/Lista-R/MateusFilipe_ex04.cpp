//Mateus Filipe De Lima Souza - BSI

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string>
#include <cstdio>

using namespace std;

struct horario{
    int hora;
    int minutos;
};
struct data{
    int dia;
    int mes;
    int ano;
};
struct compromisso{
    data dataC;
    horario horarioC;
    string texto;
}comp;

int main()
{
    setlocale(LC_ALL , "Portuguese");

    cout<<"Digite a data, Dia depois Mês depois Ano: "<<endl;
    cin>>comp.dataC.dia;
    cin>>comp.dataC.mes;
    cin>>comp.dataC.ano;
    cout<<"Digite o horario, hora depois minutos: "<<endl;
    cin>>comp.horarioC.hora;
    cin>>comp.horarioC.minutos;
    cout<<"Digite a descrição do compromissmo: "<<endl;
    fflush(stdin);
    getline(cin,comp.texto);
    cout<<"\n== Compromissos: =="<<endl;
    cout<<"Data: "<<comp.dataC.dia;
    cout<<" / "<<comp.dataC.mes;
    cout<<" / "<<comp.dataC.ano<<endl;
    cout<<"Horário: "<<comp.horarioC.hora;
    cout<<":"<<comp.horarioC.minutos<<endl;
    cout<<"Anotações: "<<comp.texto<<endl;
    cout<<endl;
    system("PAUSE");
    return 0;
}
