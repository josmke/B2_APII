//Selection Sort Decrescente
#include <stdio.h>

void selection_sort_crescente(int v[], int n){
    int temp;
    for (int i = 0; i < n-1; i++){
        int minimo = i;
        for (int j = i + 1; j < n; j++){
            if (v[j] < v[minimo]){
                minimo = j;
            }
        }
        if (minimo != i){
            temp = v[i];
            v[i] = v[minimo];
            v[minimo] = temp;
        }
    }
}

void selection_sort_decrescente(int v[], int n){
    int temp;
    for (int i = 0; i < n-1; i++){
        int minimo = i;
        for (int j = i + 1; j < n; j++){
            if (v[j] > v[minimo]){
                minimo = j;
            }
        }
        if (minimo != i){
            temp = v[i];
            v[i] = v[minimo];
            v[minimo] = temp;
        }
    }
}

int main(){
    int v[10] = {32, 4, 73, 21, 1, 8, 99, 15, 63, 87};

    selection_sort_crescente(v, 10);
    printf("Vetor em ordem crescente:\n");
    for (int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    selection_sort_decrescente(v, 10);
    printf("Vetor em ordem decrescente:\n");
    for (int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    printf("\n");



    return 0;
}