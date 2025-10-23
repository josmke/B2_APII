#include <stdio.h>

void inverte_vetor(int v[], int n){
    int temp;
    int cont = n - 1;
    int divisor = n / 2;
    for (int i = 0; i < divisor; i++){
        temp = v[i];
        v[i] = v[cont];
        v[cont] = temp;
        cont--;
    }
}

int main(){
    int v[5] = {10, 20, 30, 40, 50};

    inverte_vetor(v, 5);

    for (int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}