//Mateus Filipe de Lima Souza - BSI 2018
#include <iostream>
#include <locale.h>
#include <random>
#include <stdlib.h>

using namespace std;

int passos = 0;

//1*Versão => Sequência: 5 2 4 6 1 3 -> Passos:45

void combinar(int *vetor, int inicio, int meio, int fim)
{
    int *vL = new int[meio-inicio+1];
    int *vR = new int[fim-meio];

    for(int i = 0 ; i < meio-inicio+1 ; i++)
    {
        passos++;
        vL[i] = vetor[inicio+i];
    }
    for(int i = 0 ; i < fim-meio; i++)
    {
        passos++;
        vR[i] = vetor[meio+i+1];
    }

    int ie = 0, id = 0, iv = inicio;
    while(ie < (meio-inicio+1) && id < (fim-meio))
    {
        passos++;
        if(vL[ie] < vR[id])
        {
            vetor[iv] = vL[ie];
            ie++;
        }
        else
        {
            vetor[iv] = vR[id];
            id++;
        }
        iv++;
    }
    while(ie < (meio-inicio+1))
    {
        passos++;
        vetor[iv] = vL[ie];
        ie++;
        iv++;
    }
    while(id < (fim-meio))
    {
        passos++;
        vetor[iv] = vR[id];
        id++;
        iv++;
    }
}
void insertionSort(int *vet, int inicio, int fim)
{
    //Ordena:
    int aux, j;
    for(int i = inicio+1 ; i < fim+1; i++)
    {
        aux = vet[i];
        j = i-1;
        while(j >= inicio && vet[j] > aux)
        {
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = aux;
    }
    //-------
}
void mergesort(int *vetor, int inicio, int fim, int k)
{
    //1. se a instancia for pequena, resolver imediatamente
    //2. caso contrário:

    //3. dividir a instancia no meio
    //4. resolver a primeira meio usando o mesmo algoritmo
    //5. resolver a segunda meio usando o mesmo algoritmo
    //6. combinar as subsoluções na solução final
    int meio;
    meio =  ((fim+inicio)/2.0);
    if((fim-inicio+1)  <= k)
    {
        insertionSort(vetor,inicio, fim);
    }
    else
    {
        mergesort(vetor, inicio, meio, k);
        mergesort(vetor, meio+1, fim, k);

        combinar(vetor, inicio, meio, fim);
    }

    return;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int qtde, k;
    cout << "Programa de Teste de Ordenação" << endl
         << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl
         << "Quantos números aleatorios devo gerar? : ";
    cin >> qtde;
    cout<<"Dê um valor para 'k': "<<endl;
    cin>>k;

    int *vetor = new int[qtde];

    default_random_engine motor;
    uniform_int_distribution<int> distribuicao(1,100);

    cout << "Gerando " << qtde << " números.";

    for (int i = 0; i < qtde; i++)
    {
//          vetor[i] = rand()%21;
        vetor[i] = distribuicao(motor);
    }

    cout << " Pronto!" << endl;

    cout << endl << "Números gerados: [ ";
    for (int i = 0; i < qtde; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    cout << "Ordenando... " << endl;

    mergesort(vetor, 0, qtde-1, k);

    cout << passos << " passos." << endl << endl;

    cout << "Vetor final" << endl << "[ ";
    for (int i = 0; i < qtde; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    delete vetor;
    return 0;
}
