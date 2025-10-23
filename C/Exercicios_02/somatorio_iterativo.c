#include <stdio.h>

int somatorio(int a, int b){
    int x = 0;
    for (int i = a; i <= b; i++){
        x += i;
    }
    return x;
}

int main(){
     int a = 0;
     int b = 9;

     int r = somatorio(a, b);
     printf("Somatório de: %d a %d - Resultado: %d\n",a, b, r);

     a = 2;
     b = 4;

     r = somatorio(a, b);
     printf("Somatório de: %d a %d - Resultado: %d\n",a, b, r);

     return 0;
}