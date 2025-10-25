#include <stdio.h>

int produto_pares(int v[], int n){
    if (n <= 0){
        return 1;
    }
    int produto = produto_pares(v, n-1); // Variavel que cria a recurs�o

    if (v[n-1] % 2 == 0){ //Verifica��o para multiplicar somente os pares do vetor
        return produto * v[n-1];
    }
    else{
        return produto;
    }

    return 0;
}

int main(){
    int v[5] = {1, 2, 3, 4, 5};

    int p = produto_pares(v, 5);
    printf("%d\n", p);

    return 0;
}   