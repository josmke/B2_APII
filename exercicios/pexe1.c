#include <stdio.h>
#include <string.h>

void par_ou_impar(int n1, int n2){ //Funções são chamadas e retornam depois
    int pi = n1 % 2; //Divisão com % retorna o resto da divisão 
    int ip = n2 % 2;
    char resultado[30]; //Váriavéís que armazenam texto são declaradas com o tamanho total de caracteres que vc quer digitar
   if (pi == 0 && ip == 0){ //& comercial é o operador lógico de E
        strcpy(resultado, "Ambos são pares!"); //função strcpy atribui o texto após a virgula para a variável desejada
    }
    else if (pi == 0 && ip != 0){ //! significa diferente, aqui é diferente de 0
        sprintf(resultado, "%d é par e %d é impar!", n1, n2); //Função sprintf atribui variáveis para dentro das var de char (string)
    }
    else if(pi != 0 && ip == 0){
        sprintf(resultado, "%d é impar e %d é par!", n1, n2);
    }
    else{ //Else em C não possui condição, pois se as anteriores são falsas, ela é verdadeira
        sprintf(resultado, "Ambos são ímpares!");
    }
    printf("%s\n", resultado); //Printar variável de string é %s, com somente o nome do array e não o seu taamnho
}

int main(){ //Função main SEMPRE é a primeira que inicia no progama 
    printf("Programa para saber se dois números são pares...\n");
    printf("\n");
    int n1;
    int n2;
    printf("Digite um número:\n");
    scanf("%d", &n1);
    printf("Digite outro:\n");
    scanf("%d", &n2); //ScanF é o input do usuário, então só utilizar %tipo da var e atribuir o valor inserido a ela com &

    par_ou_impar(n1, n2); //Aqui chamamos a função de cima, a partir daqui a main só será executada após o fim completo da função que foi chamada.
}