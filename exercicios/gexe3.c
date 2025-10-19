#include <stdio.h>
#include <stdbool.h>

void inverte_vetor(int v[], int n){
    for (int i = 1; i < n; i++){
        int guardar_elemento = v[i];
        int j = i - 1;
        bool encontrou = false;
       while (j >= 0 && !encontrou){
            if (v[j] < guardar_elemento){
                v[j + 1] = v[j];
                j--;
            }
            else{
                encontrou = true;
            }        
       }
       v[j + 1] = guardar_elemento;
    }
}

int main(){
    int v[5] = {10, 20, 30, 40, 50};

    inverte_vetor(v, 5);

    for (int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}