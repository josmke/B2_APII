#include <stdio.h>

int pot_recursiva(int n, int e){
    if (e == 0){
        return 1;
    }

    else{
        return n * pot_recursiva(n, e - 1);
    }
}

int main(){
    int base;
    int expoente;
    printf("Insira a base: \n");
    scanf("%d", &base);

    printf("Insira o expoente: \n");
    scanf("%d", &expoente);

    while (expoente < 0){
        printf("Erro! o expoente precisa ser positivo!\nInsira um novo valor:\n");
        scanf("%d", &expoente);
    }

    int r = pot_recursiva(base, expoente);

    printf("Resultado de %d^%d = %d\n", base, expoente, r);

    return 0;
}