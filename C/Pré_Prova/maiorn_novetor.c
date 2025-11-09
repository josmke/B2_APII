#include <stdio.h>

int maior_recursivo(int v[], int n){
    int maior_numero;

    if (n == 1){
        return v[0];
    }

    else {
        maior_numero = maior_recursivo;

        if (maior_numero > v[n-1]){
            return maior_numero;
        }
        else {
            return v[n-1];
        }
    }
}