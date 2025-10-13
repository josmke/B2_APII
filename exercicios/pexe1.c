#include <stdio.h>
#include <string.h>

void par_ou_impar(int n1, int n2){ //Fun��es s�o chamadas e retornam depois
    int pi = n1 % 2; //Divis�o com % retorna o resto da divis�o 
    int ip = n2 % 2;
    char resultado[30]; //V�riav��s que armazenam texto s�o declaradas com o tamanho total de caracteres que vc quer digitar
   if (pi == 0 && ip == 0){ //& comercial � o operador l�gico de E
        strcpy(resultado, "Ambos s�o pares!"); //fun��o strcpy atribui o texto ap�s a virgula para a vari�vel desejada
    }
    else if (pi == 0 && ip != 0){ //! significa diferente, aqui � diferente de 0
        sprintf(resultado, "%d � par e %d � impar!", n1, n2); //Fun��o sprintf atribui vari�veis para dentro das var de char (string)
    }
    else if(pi != 0 && ip == 0){
        sprintf(resultado, "%d � impar e %d � par!", n1, n2);
    }
    else{ //Else em C n�o possui condi��o, pois se as anteriores s�o falsas, ela � verdadeira
        sprintf(resultado, "Ambos s�o �mpares!");
    }
    printf("%s\n", resultado); //Printar vari�vel de string � %s, com somente o nome do array e n�o o seu taamnho
}

int main(){ //Fun��o main SEMPRE � a primeira que inicia no progama 
    printf("Programa para saber se dois n�meros s�o pares...\n");
    printf("\n");
    int n1;
    int n2;
    printf("Digite um n�mero:\n");
    scanf("%d", &n1);
    printf("Digite outro:\n");
    scanf("%d", &n2); //ScanF � o input do usu�rio, ent�o s� utilizar %tipo da var e atribuir o valor inserido a ela com &

    par_ou_impar(n1, n2); //Aqui chamamos a fun��o de cima, a partir daqui a main s� ser� executada ap�s o fim completo da fun��o que foi chamada.
}