#include <stdio.h>

int soma_impares_recursivo(int v[], int n){
    int soma_impar;

    if (n <= 0){
        return 0;
    }

    else {
        //identificar os valores impares no vetor
        if (v[n-1] % 2 != 0){
            //somar somente os valores impares do vetor
            soma_impar = v[n-1] + soma_impares_recursivo(v, n-1); 
            return soma_impar;
        }
        else {
            return 0 + soma_impares_recursivo(v, n-1);
        }
    }
}

int main(){
    int v[4] = {5, 4, 12, 3};

    int r = soma_impares_recursivo(v, 4);
    printf("%d\n", r);
    return 0;
}