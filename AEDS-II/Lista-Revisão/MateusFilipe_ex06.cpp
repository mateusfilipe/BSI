//Mateus Filipe De Lima Souza - BSI

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string>
#include <cstdio>

using namespace std;

struct aluno{
    string nome;
    long int matricula;
    string curso;
};
int main()
{
    setlocale(LC_ALL , "Portuguese");
    aluno v[2];
    cout<<"Digite nome / matricula / curso: "<<endl;
    for(int i = 0 ; i < 2 ; i++){
        fflush(stdin);
        getline(cin,v[i].nome);
        cin>>v[i].matricula;
        fflush(stdin);
        getline(cin,v[i].curso);
        cout<<endl;

    }
    cout<<"Alunos matriculados: \n"<<endl;
    for(int i = 0 ; i < 2 ; i++){
        cout<<v[i].nome<<endl;
        cout<<v[i].matricula<<endl;
        cout<<v[i].curso<<endl;
        cout<<endl;
    }
    system("PAUSE");
    return 0;
}

