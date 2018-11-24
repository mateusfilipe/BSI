//Mateus Filipe De Lima Souza - BSI

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL , "Portuguese");
    int linhas = 0;
    string k;
    ifstream fin("exemplo.txt");
    ofstream fout("nlinhas.txt");
    while(!fin.eof()){
        getline(fin,k);
        linhas++;
    }
    fout<<linhas;
    system("PAUSE");
    return 0;
}

