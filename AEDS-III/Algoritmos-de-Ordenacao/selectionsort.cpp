//Mateus Filipe de Lima Souza
#include <iostream>
#include <locale.h>
#define MAX 6

using namespace std;

//=> Sequency:5 2 4 6 1 3 -> Steps:26

//Função responsável por ordenar o vetor:
void ordenar(float vetor[MAX])
{
    float aux, cont= 0;//(aux)iliar para facilitar a troca dos valores;
                      //(cont)ador que ajudará a ver melhor o número de passos;
    int menor;       //Variável para armazenar a posição do menor valor do vetor;

    for(int i = 0 ; i < MAX ; i ++)
    {
        cont++;
        menor = i;
        for(int j = i+1 ; j < MAX ; j++)
        {
            cont++;
            //Verificando a posição do menor valor;
            if(vetor[j] < vetor[menor])
            {
                cont++;
                menor = j;
            }

        }
        //Trocando valores para ordenar;
        aux = vetor[menor];
        vetor[menor] = vetor[i];
        vetor[i] = aux;
    }
    //Imprimindo o número de passos feitos pelo código;
    cout<<cont<<" passos realizados.\n"<<endl;
    return;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float numeros[MAX]; //Declaração do vetor que será ordenado;
    cout<<"\n********Selectionsort********\n"<<endl;
    cout<<"Digite "<<MAX<<" números"<<endl;
    cout<<"Preencha o vetor a ser ordenado: "<<endl;

    //Preenchendo o vetor original;
    for (int i = 0; i < MAX; i++)
    {
        cout<<"Número "<<i<<": ";
        cin>>numeros[i];
    }
    //Imprimindo vetor antes de ordenar.
    cout << "Vetor Inserido: [ ";
    for (int i = 0; i < MAX; i++)
        cout << numeros[i] << " ";
    cout << "]\n" << endl;

    //Invocando função que ordena o vetor.
    ordenar(numeros);

    //Imprimindo vetor após ordenar;
    cout << "Vetor Ordenado: [ ";
    for (int i = 0; i < MAX; i++)
        cout << numeros[i] << " ";
    cout << "]" << endl;

    return 0;
}
