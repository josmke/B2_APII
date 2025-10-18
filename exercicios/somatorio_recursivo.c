#include <stdio.h>

int somatorio(int a, int b){
    if (a == b){
        return a;
    }
    else{
        return somatorio((a + 1), b) + a; 
    }
}

int main(){
    int a = 0;
    int b = 9;

    int x = somatorio(a, b);
    printf("Somatorio de: %d a %d = %d\n", a, b, x);

    a = 2;
    b = 4;

    x = somatorio(a, b);
    printf("Somatorio de: %d a %d = %d\n", a, b, x);


    return 0;
}
