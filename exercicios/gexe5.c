#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    for (int i = 0; i < 5; i++){
        printf("Jogador: %s\nPontuacao: %d\n", jogadores[i],pontuacoes[i]); //um unico print f não imprime todos os elementos do vetor. é necessario usar um loop 
    }
    
    
    return 0;
}