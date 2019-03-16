//Mateus Filipe de Lima Souza - BSI 2018
#include <iostream>
#include <locale.h>
// #include <random>
#include <stdlib.h>
#define MAX 6

using namespace std;

//1*Versão => Sequência: 5 2 4 6 1 3 -> Passos:45

void combinar(int *vetor, int inicio, int metade, int fim)
{
    int metade2 = metade+1;
    int *vL = new int[metade2];
    int *vR = new int[metade2];

    copy (vetor, vetor + metade, vL);
    copy (vetor + metade2, vetor+fim, vR);

    for(int i = 0 ; i < fim; i++){
      vetor[i] = vL[i];
      vetor[i+metade2] = vR[i];
    }
}
void ordenar(int *vetor, int inicio, int fim, int passos)
{
    //1. se a instancia for pequena, resolver imediatamente
    //2. caso contrário:

    //3. dividir a instancia no meio
    //4. resolver a primeira metade usando o mesmo algoritmo
    //5. resolver a segunda metade usando o mesmo algoritmo
    //6. combinar as subsoluções na solução final

    if(inicio == fim){
        int metade;
        metade = (fim-inicio)/2;

        ordenar(vetor, inicio, metade, passos);
        ordenar(vetor, metade+1, fim, passos);

        combinar(vetor, inicio, metade, fim);
    }
}

int main()
{
    int qtde;

    cout << "Programa de Teste de Ordenação" << endl
         << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl
         << "Quantos numeros aleatorios devo gerar? : ";
    cin >> qtde;

    int *vetor = new int[qtde];

//    default_random_engine motor;
//    uniform_int_distribution<int> distribuicao(1,100);

    cout << "Gerando " << qtde << " números.";

    for (int i = 0; i < qtde; i++)
    {
          vetor[i] = rand()%100;
//        vetor[i] = distribuicao(motor);
    }

    cout << " Pronto!" << endl;

    cout << endl << "Números gerados: [";
    for (int i = 0; i < qtde; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    cout << "Ordenando... " << endl;

    int passos = 0;
    ordenar(vetor, 0, qtde-1, passos);

    cout << passos << " passos." << endl << endl;

    cout << "Vetor final" << endl << "[";
    for (int i = 0; i < qtde; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    delete vetor;
    return 0;
}
