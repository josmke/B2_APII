#include <stdio.h>

int soma_vetor(int v[], int n){
    if (n <= 0){
        return n;
    }
    else{
       return v[n - 1] + soma_vetor(v, n -1);
    }
}

int main(){
    int v[4] = {4, 3, 5, 7};
    printf("Vetor: ");
    for (int i = 0; i < 4; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    int soma = soma_vetor(v, 4);
    printf("Soma dos vetores = %d", soma);
}