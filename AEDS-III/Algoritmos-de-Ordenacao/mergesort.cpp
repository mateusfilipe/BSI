//Mateus Filipe de Lima Souza - BSI 2018
#include <iostream>
#include <locale.h>
#include<random>
#define MAX 6

using namespace std;

//1ºVersão => Sequência: 5 2 4 6 1 3 -> Passos:45

void combinar(int *vetor, int inicio, int metade, int fim)
{
    int metade2 = metade+1;
    int *vL, *vR;

    copy(vetor, vetor+metade, vL);
    copy(vetor+metade2, vetor+fim, vR);



}
void ordenar(int *vetor, int inicio, int fim)
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

    combinar();

}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float numeros[MAX];

    cout << "Ordenador de sequência" << endl
         << "=-=-=-=-=-=-=-=-=-=-=-" << endl
         << "Digite " << MAX << " números" << endl;

    for (int i = 0; i < MAX; i++)
    {
        cout << "Número " << i << ": ";
        cin >> numeros[i];
    }

    cout << endl << "Ordenando...";
    ordenar(numeros);
    cout << " Pronto." << endl << endl;

    cout << "Resultado: [ ";
    for (int i = 0; i < MAX; i++)
        cout << numeros[i] << " ";
    cout << "]" << endl;

    return 0;
}
