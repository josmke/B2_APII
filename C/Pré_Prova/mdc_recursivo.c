#include <stdio.h>

int mdc_recursivo(int x, int y){
    int resto = x % y;
    if (x % y == 0){
        return y;
    }

    else {
         x = y;
        return mdc_recursivo(y, resto);
    }
}

int main (){
    int a = 8;
    int b = 6;

    int resultado = mdc_recursivo(a, b);

    printf("%d\n", resultado);


}