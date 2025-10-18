#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void mostrar(int v[], int n){
    for (int i = 0; i < n; i++){
            printf("%d ", v[i]);
    }
    printf("\n");
}


void bsort(int v[], int n){

    //VAR para controlar o loop principal da função
    int i, j, temp;

    for (i = 0; i < n-1; i++){


        for (j = 0; j < n - 1 - i; j++){
           if (v[j] > v[j+1]){

               temp = v[j];
               v[j] = v[j+1];
               v[j+1] = temp;
            }
        }
    }
}

int main(){

    srand(time(NULL));
    int n;

    printf("N de elementos desejados: ");
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++){

      v[i] = rand() % 101;
                      
    }
    mostrar(v, n);
    bsort(v, n);
    mostrar(v, n);
}