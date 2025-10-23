//Exercicio de troca insertion sort com ordenação de string por ranking de pontos
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void insertion_sort_decrescente(int p[], char jg[][50], int n){
    for (int i = 1; i < n; i++){ // percorrer o elemento do vetor a partir da segunda posição
        int elemento_p = p[i]; // Guarda temporariamente o valor do elemento na primeira posição do vetor 
        char nome_temp[50]; //Variavel de string temporaria para guardar os nomes
        strcpy(nome_temp, jg[i]); // Copia o nome no indice atual para a variavel temporaria
        int j = i - 1; // inicializa a partir da ultima posição do vetor
        bool encontrou = false; // Chave para controlar o while

        while (j >= 0 && !encontrou){ //Laço vai rodar enquanto j for maior ou igual a zero e encontrou for não falso 
            if (p[j] < elemento_p){ //compara o elemento na posiçãõ atual do indice com o elemento que guardamos 
                p[j + 1] = p[j]; //Se ele for maior, é empurrado para a direita
                strcpy(jg[j + 1], jg[j]);
                j--; //continuamos procurando, decrementando o j
            }
            else{ // se for menor
                encontrou = true; // reviramos a var para true e terminamos o while
            }
        }
        p[j + 1] = elemento_p; // adicionamos o elemento de pontuação guardada temporariamente na posição que foi aberta
        strcpy(jg[j + 1], nome_temp); // adicionamos o nome do jogador guardado na variavel temporaria na posição que foi aberta
    }
}

void mostrar(int p[], char c[][50], int n){
    for (int i = 0; i < n; i++){
        printf("Jogador: %s - %d pontos\n", c[i], p[i]);
    }
    printf("\n");
}

int main(){
    srand(time(NULL));
    char jogadores[5][50];
    int pontuacoes[5];

    printf("Insira 5 nomes de jogadores:\n");
    for (int i = 0; i < 5; i++){
        scanf("%s", jogadores[i]);
    }
    printf("\n"); // quebra de linha
    for (int i = 0; i < 5; i++){
        pontuacoes[i] = rand() % 101;       
    }

    mostrar(pontuacoes, jogadores, 5);
    insertion_sort_decrescente(pontuacoes, jogadores, 5);
    mostrar(pontuacoes, jogadores, 5);
    
    
    return 0;
}