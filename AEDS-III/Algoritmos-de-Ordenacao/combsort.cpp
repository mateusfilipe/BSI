//Mateus Filipe de Lima Souza - BSI 2018
#include <iostream>
#include <locale.h>
#define MAX 6

using namespace std;

//3ºVersão => Sequência: 5 2 4 6 1 3 -> Passos:29
//Chamando as funções de ordenação:

void ordenar(float vetor[MAX])
{

    float aux, cont = 0;
    //bool troca = true;
    //19 1 7 12 6 2 16

    int div = MAX / 1.3;
    cout<<"\nDistancia: "<<div<<endl;

    for(int i = 0 ; i < MAX && div != 0 /*&& troca*/ ; i++){
        cont++;
        //troca = false;
        for(int j = 0 ;  j < MAX-div ; j++){
            cont++;
            if(vetor[j] > vetor[j+div]){
                cont++;
                aux=vetor[j+div];
                vetor[j+div]=vetor[j];
                vetor[j]=aux;
                //troca = true;
            }
        }
        div /= 1.3;
        cout<<"Distancia: "<<div<<endl;
        //if(!troca)break;
    }

    cout<<""<<cont<<" Passos\n"<<endl;
    return;
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
