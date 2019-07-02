#include <iostream>
#include <iomanip>
#include <stdlib.h>
#define TAM 7
using namespace std;

int p[7] = {30,35,15,5,10,20,25};

template <typename T>
void multiMatriz(T m[TAM][TAM], T s[TAM][TAM])
{
    int q;
    int j = 0;
    int n = TAM;
    for(int i = 0 ; i < n ; i++)
    {
        for(int a = 0 ; a < n ; a++)
            m[i][a] = 0;
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int a = 0 ; a < n ; a++)
            s[i][a] = 0;
    }
////////////////////////////////////////////////
    for(int i = 0 ; i < n ; i++)
    {
        m[i][i] = 0;
    }
    for(int l = 1 ; l < n; l++)
    {
        for(int i = 0 ; i < n-l ; i++)//LIXO
        {
            j = i+l;
            int inf = INT_MAX;
            m[i][j] = inf;
            for(int k = i ; k < j-1 ; k++)
            {
                q = m[i][k]+m[k+1][j] + p[i]*p[k+1]*p[j];
//                cout<<p[j]<<endl;
                if(q < m[i][j])
                {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
    cout<<"MATRIZ M"<<endl;
    for(int i = 0 ; i < TAM ; i++){
        for(int a = 0 ; a < TAM ; a++){
            cout<<setw(5)<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nMATRIZ S"<<endl;
    for(int i = 0 ; i < TAM ; i++){
        for(int a = 0 ; a < TAM ; a++){
            cout<<setw(10)<<s[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int m[TAM][TAM], s[TAM][TAM];
    multiMatriz(m,s);
    return 0;
}
