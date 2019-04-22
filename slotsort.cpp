#include <iostream>
#include <locale.h>
#include <random>
#include <stdlib.h>
#include <chrono>

using namespace std;

int cont = 0;
int cont2 = 0;
int passos = 0;

//Função para impressão de vetor:
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

//Função que ordena o vetor:
void ordena(int *vetor, int tamanho)
{
    //Variáveis auxiliares para encontrar o maior e o menor valor do vetor:
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
    //Preenhce as posições do vetorAux com os valores do vetor original (explicar lógica)
    for(int i = 0 ; i < tamanho ; i++)
    {
        passos++;
        vetorAux[vetor[i]-menor] = vetor[i];
    }

    //Impressão para verificação do vetor auxiliar
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

    //Verificando posições iguais no vetor original e substituindo pelo menor-1
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

    //Contando quantos "menor-1" tem no vetor original, essa quantidade será eliminada do vetor;
    for(int i = 0 ; i < tamanho  ; i++)
    {
        if(vetor[i] == menor-1)
        {
            cont++;
        }
    }
    //Deletando vetor auxiliar, pois já cumpriu sua missão;
    delete vetorAux;
}
//=================================================================================================//

int main()
{
    int tamanho; //variável que controla o tamanho do vetor, seria o nosso 'n'
    cout<<"Digite o tamanho do vetor a ser ordenado: ";
    cin>>tamanho;

    //Declarando vetor que receberá os valores desordenados e será ordenado;
    int *vetor = new int[tamanho];

    char op; //Controlador de opçõe s para verificar se o vetor será aleatório ou não;
    cout<<"O vetor gerado deve ser aleatorio(s/n)? ";
    cin>>op;
    cout<<endl;

    //Caso seja 's' ou 'S' o vetor será ordenado de forma aleatória;
    if(op == 's' || op == 'S')
    {
        default_random_engine motor;
        uniform_int_distribution<int> distribuicao(1,100);

        for (int i = 0; i < tamanho; i++)
        {
            vetor[i] = distribuicao(motor);
        }

    }
    //Caso seja 'n' ou 'N' o vetora deverá ser preenchido pelo usuário;
    else if(op == 'n' || op == 'N')
    {
        for(int i = 0 ; i < tamanho ; i++)
        {
            cout<<"Preencha a posicao "<<i<<" : ";
            cin>>vetor[i];
        }
    }

    //Imprimindo vetor antes da ordenação:
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

    //Invocando função que ordena o vetor.

    auto start = chrono::steady_clock::now(); //Aplicando função que conta em quanto tempo ordena
    ordena(vetor, tamanho);
    auto end = chrono::steady_clock::now(); //--//

    //Imprimindo vetor após ordenação
    /*cout<<"\n>Vetor Ordenado: [ ";
    printVet(vetor, tamanho-cont);
    cout<<"]"<<endl;*/
    cout<<passos<<" passos foram executados."<<endl;

    //Imprimindo o tempo de duração da função que ordena o vetor:
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
