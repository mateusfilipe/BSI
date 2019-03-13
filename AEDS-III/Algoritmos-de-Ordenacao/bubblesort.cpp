//Mateus Filipe de Lima Souza

/*
    Algoritmo analisado e implementado com auxilio
    do professor e dos alunos presentes na aula com
    um intuito de reduzir o número de passos feitos
    pelo algoritmo, visando sua otimização.
*/

#include <iostream>
#include <locale.h>
#define MAX 6

using namespace std;

//=> Sequency:5 2 4 6 1 3 -> Steps:29

//Função responsável por ordenar o vetor:
void ordenar(float vetor[MAX])
{
    float aux, cont = 0; //Auxiliar para facilitar a troca dos valores;
                        //Contador que ajudará a ver melhor o número de passos;
    bool troca = true; //Variável para auxiliar a reduzir o custo do algoritmo;

    for(int i = 0 ; i < MAX && troca ; i++){
        cont++;
        troca = false;
        for(int j = 1 ; j < (MAX-i) ; j++){
            cont++;
            //Verificando os valores e fazendo a troca;
            if(vetor[j-1]>vetor[j]){
                cont++;
                aux=vetor[j];
                vetor[j]=vetor[j-1];
                vetor[j-1]=aux;
                troca = true;
            }
        }
        if(!troca)break; //Caso não tenha necessidade de troca ele quebra e melhora seu custo;
    }
    //Imprimindo o número de passos feitos pelo código;
    cout<<cont<<" passos realizados\n"<<endl;
    return;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float numeros[MAX]; //Declaração do vetor que será ordenado;
    cout<<"\n********Bubblesort********\n"<<endl;
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
