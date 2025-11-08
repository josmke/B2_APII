/*Função recursiva em C que permite inverter um número inteiro*/

#include <stdio.h>

int inverter_numero(int numero, int total){
    if (numero == 0){
        return total;
    }

    else {
        return inverter_numero(numero / 10, total * 10 + numero % 10);
    }
}

int main(){
    int numero;

    printf("Insira um número para ser invertido:\n");
    scanf("%d", &numero);

    numero = inverter_numero(numero, 0); //O total precisa ser 0 para que seja possivel inverter

    printf("Número invertido: %d\n", numero);
}