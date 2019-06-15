#include <iostream>
#include <math.h>
#define TAM 6

using namespace std;

int Troco(float troco, float m[]){
    int total = 0;
    int s[TAM] = {0 , 0, 0, 0, 0, 0};
    for(int i = 0 ; i < TAM ; i++){
        s[i] = floor(troco/m[i]);
        troco = troco - (s[i] * m[i]);
        total = total + s[i];
    }
    return total;
}

int main()
{
    float m[TAM] = {100, 50, 24, 12, 5, 1};

    cout<<Troco(20, m);
    return 0;
}
