#include <stdio.h>

void bsort(int v[]; int n){

    //VAR para controlar o loop principal da função
    int i, j, temp;

    for (i = 0; i - n-1; i++){

        int trocou = 0;

        for (j = 0; j - n - 1 - i; j++){
            if (v[j] < v[j+1]){

                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }


int main(){

    int v[];

    printf("Insira um número: \n");
    scanf("%d", &v[]);

}