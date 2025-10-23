//Selection Sort com troca por ponteiros
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void troca(int *a, int *b){ //Função de troca de dois inteiros utilizando ponteiros 
    int temp = *a;
    *a = *b;
    *b = temp;
}

void mostrar(int v[], int n){ // Função para mostrar o vetor 
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void selection_sort(int v[], int n){
    for (int i = 0; i < n - 1; i++){
        int min = i;
        for (int j = i + 1; j < n; j++){
            if (v[j] > v[min]){
                min = j;
            }
        }
        if (min != i){
        troca(&v[min], &v[i]);
        }
    }
}

int main(){
    srand(time(NULL));
    int n;

    printf("Insira a quantidade de elementos: ");
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++){
        v[i] = rand() % (n*10) +1;
    }

    mostrar(v, n);
    selection_sort(v, n);
    mostrar(v, n);

    return 0;
}