#include <iostream>
#include <locale.h>
#include <random>
#include <stdlib.h>
#include <chrono>

using namespace std;

int cont = 0;
int cont2 = 0;
int passos = 0;

//Fun��o para impress�o de vetor:
void printVet(int *vetor, int TAM)
{
    for(int i = 0 ; i < TAM ; i++)
    {
        cout<<vetor[i]<<" ";
    }
}
//==================================//

//Encontra os valores repetidos dentro do vetor:
void vetorRepetido(int *vetor, int tamanho)
{
    for(int i = 0 ; i < tamanho ; i++)
    {
        for(int j = 0 ; j < i ; j++){
            if(vetor[i] == vetor[j]){
                if(i != j){
                    cout<<vetor[i]<<" ";
                    cont2++;
                }
            }
        }
    }
}
//============================================//

//Fun��o que ordena o vetor:
void ordena(int *vetor, int tamanho)
{
    //Vari�veis auxiliares para encontrar o maior e o menor valor do vetor:
    int maior = -1000;
    int menor = 1000;

    //Armazenar o maior e o menor valor do vetor original:
    for(int i = 0 ; i < tamanho ; i++)
    {
        if(vetor[i] > maior)
            maior = vetor[i];
        if(vetor[i] < menor)
            menor = vetor[i];
    }
    //Declarando vetor auxiliar que tera o tamanho do (maior-menor+1), para que ele possa receber o maior valor;
    int *vetorAux = new int[maior-menor+1];
    //Preenche o vetor auxiliar com o menor-1:
    for(int i = 0 ; i < maior-menor+1; i++)
    {
        vetorAux[i] = menor-1;
    }
    //Preenhce as posi��es do vetorAux com os valores do vetor original (explicar l�gica)
    for(int i = 0 ; i < tamanho ; i++)
    {
        passos++;
        vetorAux[vetor[i]-menor] = vetor[i];
    }

    //Impress�o para verifica��o do vetor auxiliar
    /*cout<<endl;
    cout<<"VetorAux: ";
    printVet(vetorAux, maior-menor+1);
    cout<<endl;*/

    //Passando os valores do vetor auxiliar para de volta ao vetor original
    int j = 0;
    for(int i = 0 ; i < maior-menor+1  ; i++)
    {
        passos++;
        if ( vetorAux[i] != menor-1)
        {
            vetor[j] = vetorAux[i];
            j++;
        }
        if(j >= tamanho)
        {
            break;
        }
    }

    //Verificando posi��es iguais no vetor original e substituindo pelo menor-1
    for(int i = 0 ; i < tamanho  ; i++)
    {
        for(int j = 0 ; j < tamanho  ; j++)
        {
            if(j!=i)
            {
                if(vetor[i]==vetor[j])
                {
                    vetor[j] = menor-1;
                }
            }
        }
    }

    //Contando quantos "menor-1" tem no vetor original, essa quantidade ser� eliminada do vetor;
    for(int i = 0 ; i < tamanho  ; i++)
    {
        if(vetor[i] == menor-1)
        {
            cont++;
        }
    }
    //Deletando vetor auxiliar, pois j� cumpriu sua miss�o;
    delete vetorAux;
}
//=================================================================================================//

int main()
{
    int tamanho; //vari�vel que controla o tamanho do vetor, seria o nosso 'n'
    cout<<"Digite o tamanho do vetor a ser ordenado: ";
    cin>>tamanho;

    //Declarando vetor que receber� os valores desordenados e ser� ordenado;
    int *vetor = new int[tamanho];

    char op; //Controlador de op��e s para verificar se o vetor ser� aleat�rio ou n�o;
    cout<<"O vetor gerado deve ser aleatorio(s/n)? ";
    cin>>op;
    cout<<endl;

    //Caso seja 's' ou 'S' o vetor ser� ordenado de forma aleat�ria;
    if(op == 's' || op == 'S')
    {
        default_random_engine motor;
        uniform_int_distribution<int> distribuicao(1,100);

        for (int i = 0; i < tamanho; i++)
        {
            vetor[i] = distribuicao(motor);
        }

    }
    //Caso seja 'n' ou 'N' o vetora dever� ser preenchido pelo usu�rio;
    else if(op == 'n' || op == 'N')
    {
        for(int i = 0 ; i < tamanho ; i++)
        {
            cout<<"Preencha a posicao "<<i<<" : ";
            cin>>vetor[i];
        }
    }

    //Imprimindo vetor antes da ordena��o:
    /*cout<<"\n>Vetor Desordenado: [ ";
    printVet(vetor, tamanho);
    cout<<"]"<<endl;*/


    //Imprimindo quantidade de numeros repetidos e os numeros que repetiram:
    cout<<"\n ----------------------------------------------"<<endl;
    cout<<"|Elementos que se repetem: ";
    /*vetorRepetido(vetor, tamanho);*/
    cout<<"\n|Quantidade de numeros repetidos: "<<cont2<<endl;
    cout<<" ----------------------------------------------"<<endl;

    cout<<"*Ordenando...*"<<endl;

    //Invocando fun��o que ordena o vetor.

    auto start = chrono::steady_clock::now(); //Aplicando fun��o que conta em quanto tempo ordena
    ordena(vetor, tamanho);
    auto end = chrono::steady_clock::now(); //--//

    //Imprimindo vetor ap�s ordena��o
    /*cout<<"\n>Vetor Ordenado: [ ";
    printVet(vetor, tamanho-cont);
    cout<<"]"<<endl;*/
    cout<<passos<<" passos foram executados."<<endl;

    //Imprimindo o tempo de dura��o da fun��o que ordena o vetor:
    cout<<"Tempo decorrido para ordenar: "
        <<chrono::duration_cast<chrono::nanoseconds>(end - start).count()
        <<" nanoseconds." <<endl;

    cout<<"Tempo decorrido para ordenar: "
        <<chrono::duration_cast<chrono::microseconds>(end - start).count()
        <<" microseconds." <<endl;

    cout<<"Tempo decorrido para ordenar: "
        <<chrono::duration_cast<chrono::milliseconds>(end - start).count()
        <<" milliseconds." <<endl;

    cout<<"Tempo decorrido para ordenar: "
        <<chrono::duration_cast<chrono::seconds>(end - start).count()
        <<" seconds." <<endl;

    return 0;
}
