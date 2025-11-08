#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma_vetor(int v[], int n){
    int elemento = v[n-1];
    if (n == 1){
        return v[0];
    }

    else {
        return elemento + soma_vetor(v, n-1);
    }

}

int main(){
    srand(time(NULL));
    int n;

    printf("Insira a quantidade de elementos no vetor:\n");
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++){
        v[i] = rand() % 101;
    }

    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    int soma = soma_vetor(v, n);

    printf("%d\n", soma);
}