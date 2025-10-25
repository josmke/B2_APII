#include <stdio.h>

int indice_menor_impar(int v[], int n){
    int temp = -1;
    int indice = -1;
    for (int i = 0; i < n; i++){
        if (v[i] % 2 != 0){
            if (temp == -1){
                temp = v[i];
                indice = i;
            }
            else if (v[i] < temp){
                temp = v[i];
                indice = i;
            }
        }
    }
    return indice;
}

int main(){
    int v[5] = {2, -3, 8, 7, -7};

    int i = indice_menor_impar(v, 5);

    printf("%d\n", i);

    return 0;
}