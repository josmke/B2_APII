#include <stdio.h>

int main(){
    char jogadores[5][50];
    int pontuacoes[4];

    printf("Insira 5 nomes de jogadores:\n");
    scanf("%s ", &jogadores[0][50]);
    scanf("%s ", &jogadores[1][50]);
    scanf("%s ", &jogadores[2][50]);
    scanf("%s ", &jogadores[3][50]);
    scanf("%s ", &jogadores[4][50]);

    printf("%s", jogadores);

    
    return 0;
}