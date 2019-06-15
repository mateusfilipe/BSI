#include <iostream>
#define n 8
#define m 8

using namespace std;

int tabuleiro[n][m];
int comp = 0;
int mov = 0;
/*
 >Possíveis movimentos do Cavalo:
    1. (i-2)(j+1)
    2. (i-1)(j+2)
    3. (i+1)(j+2)
    4. (i+2)(j+1)
    5. (i+2)(j-1)
    6. (i+1)(j-2)
    7. (i-1)(j-2)
    8. (i-2)(j-1)
*/


void movimento(int passo, int x, int y, bool &q, int h[], int v[])
{
    int o = -1;
    bool q1;
    int xn,yn;
    do
    {
        o = o+1;
        q1 = false;
        mov++;
        xn = x+h[o];
        mov++;
        yn = y+v[o];
        comp+=5;
        if((xn >= 0 && xn <= n-1) && (yn >= 0 && yn <= m-1) && (tabuleiro[xn][yn] == 0))
        {
                mov++;
                tabuleiro[xn][yn] = passo;
                comp++;
                if(passo < n*m)
                {
                    movimento(passo+1, xn, yn, q1,h,v);
                    comp++;
                    if(!q1)
                    {
                        mov++;
                        tabuleiro[xn][yn] = 0;
                    }
                }
                else
                {
                    q1 = true;
                }

        }
        comp++;
    }while(!q1 && o != 7);
    q = q1;
}

int main ()
{
    setlocale(LC_ALL, "portuguese");
    int h[8] = {-2,-1,+1,+2,+2,+1,-1,-2};
    int v[8] = {+1,+2,+2,+1,-1,-2,-2,-1};

    //Matriz com o tabuleiro por onde o cavalo passa
    bool q =false;
    int x = 0,y = 0;  //Posição inicial do cavalo.


    //Preenchendo as matrizes com 0;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }


    tabuleiro[x][y] = 1;

    movimento(2, x, y, q, h, v);

    if(q)
    {
        cout<<"Há solulão, q = "<<q<<endl;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cout<<" "<<tabuleiro[i][j];
            }
            cout<<endl;
        }
        cout << endl << "COMPARAÇÃO: " << comp << endl;
        cout << "MOVIMENTAÇÃO: " << mov << endl;
    }
    else
    {
        cout<<"Não há solução"<<endl;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cout<<" "<<tabuleiro[i][j];
            }
            cout<<endl;
        }
        cout << endl << "COMPARAÇÂO: " << comp << endl;
    }


    return 0;
}
