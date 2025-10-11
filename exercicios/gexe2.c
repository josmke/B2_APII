#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void bubble_sort(int v[], int n){
    int temp;
    for (int cont = 0; cont < n - 1; cont++){
        for (int j = 0; j < n - 1 - cont; j++){
            if (v[j] > v[j + 1]){
                temp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = temp;
            }
        }
        mostrar(v, n);
    }
}

void mostrar(int v[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    srand(time(NULL));
    int n;
    printf("Insira o número de elementos no vetor: ");
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++){
        v[i] = rand() % (n*10) + 1;
    }

    mostrar(v, n);
    bubble_sort(v, n);
    mostrar(v, n);
}