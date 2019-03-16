//Mateus Filipe de Lima Souza
#include <iostream>
#include <locale.h>
#define MAX 6

using namespace std;

//=> Sequency:5 2 4 6 1 3 -> Steps:26

//Fun��o respons�vel por ordenar o vetor:
void ordenar(float vetor[MAX])
{
    float aux, cont= 0;//(aux)iliar para facilitar a troca dos valores;
                      //(cont)ador que ajudar� a ver melhor o n�mero de passos;
    int menor;       //Vari�vel para armazenar a posi��o do menor valor do vetor;

    for(int i = 0 ; i < MAX ; i ++)
    {
        cont++;
        menor = i;
        for(int j = i+1 ; j < MAX ; j++)
        {
            cont++;
            //Verificando a posi��o do menor valor;
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
    //Imprimindo o n�mero de passos feitos pelo c�digo;
    cout<<cont<<" passos realizados.\n"<<endl;
    return;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float numeros[MAX]; //Declara��o do vetor que ser� ordenado;
    cout<<"\n********Selectionsort********\n"<<endl;
    cout<<"Digite "<<MAX<<" n�meros"<<endl;
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

    //Invocando fun��o que ordena o vetor.
    ordenar(numeros);

    //Imprimindo vetor ap�s ordenar;
    cout << "Vetor Ordenado: [ ";
    for (int i = 0; i < MAX; i++)
        cout << numeros[i] << " ";
    cout << "]" << endl;

    return 0;
}
