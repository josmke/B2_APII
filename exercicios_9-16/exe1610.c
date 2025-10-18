#include <stdio.h>

void bubble_sort_crescente(int v[], int n){
    int temp;
    for (int cont = 0; cont < n - 1; cont++){
        for (int j = 0; j < n - 1 - cont; j++){
            if (v[j] > v[j + 1]){
                temp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = temp;
            }
        }
    }
}

void bubble_sort_decrescente(int v[], int n){
    int temp;
    for (int cont = 0; cont < n - 1; cont++){
        for (int j = 0; j < n - 1 - cont; j++){
            if (v[j] < v[j + 1]){
                temp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = temp;
            }
        }
    }
}

int main(){
    int v[10] = {32, 4, 73, 21, 1, 8, 99, 15, 63, 87};

    bubble_sort_crescente(v, 10);
    printf("Vetor em ordem crescente:\n");
    for (int i = 0; i < 10;i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    bubble_sort_decrescente(v, 10);
    printf("Vetor em ordem decrescente:\n");
    for (int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}