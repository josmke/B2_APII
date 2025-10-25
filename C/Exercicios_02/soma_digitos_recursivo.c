#include <stdio.h>

int soma_de_digitos(int n){
    if (n < 10){

        return n;
    }

    else{

        return (n % 10) + soma_de_digitos(n / 10);
    }
}

int main(){

    int digito;

    printf("Insira um digito positivo: \n");
    scanf("%d", &digito);

    while (digito < 0){
        printf("Valor invalido! E necessario que o digito seja maior que 0.\nInsira de novo: \n");
        scanf("%d", &digito);
    }

    int soma = soma_de_digitos(digito);

    printf("A soma dos digitos de: %d, e = %d\n", digito, soma);

}