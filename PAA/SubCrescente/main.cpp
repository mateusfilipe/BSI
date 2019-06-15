#include <iostream>
#include <cstdlib>

using namespace std;

void calcular(int *num, int *best, int n){
    best[n-1] = 1;
    for (int i = n-2 ; i >= 0 ; i--){
        best[i] = 1;
        for(int j = i+1; j < n ; j++ ){
            if((num[j] > num[i]) && ((1+best[j]) > best[i])){
                best[i] = 1 + best[j];
            }
        }
    }
    for(int i = 0 ; i < n ; i++)
        cout<<best[i]<<" ";
}

int main()
{
    int n = 10;
    //int num[10]= {7, 6, 10, 3, 4, 1, 8, 9, 5, 2};

    int *num = new int [n];
    for(int i = 0 ; i < n ; i++){
        num[i] = rand()%42;
    }

    for(int i = 0 ; i < n ; i++){
        cout<<num[i]<<" ";
    }

    cout<<endl;
    int *best = new int [n];
    for(int i = 0 ; i < n ; i ++)
        best[i] = 0;
    calcular(num, best, n);

    return 0;
}
