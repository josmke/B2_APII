#include <stdio.h>

void bubblesort(int v[], int n){
    int temp;
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n-1-i; j++){
            if (v[j] > v[j + 1]){
                temp = v[j + 1];
                v[j+1] = v[j];
                v[j] = temp;
            }
        }
    }
}

void selectionsort(int v[], int n){
    int temp;
    for (int i = 0; i < n - 1; i++){
        int min = i;
        for (int j = i + 1; j < n; j++){
            if (v[j] < v[min]){
                min = j;
            }
        }
        if (min != i){
            temp = v[i + 1];
            v[i + 1] = v[min];

        }
    }
}


int main(){

    int v[4] = {7, 6, 14, -8};

    bubblesort(v, 4);

    return 0;
}