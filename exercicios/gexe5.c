#include <stdio.h>

int main(){
    char jogadores[5][50];
    int pontuacoes[4];

    printf("Insira 5 nomes de jogadores:\n");
    for (int i = 0; i < 5; i++){
        scanf("%s", jogadores[i]);
    }

    printf("%s\n", jogadores); //um unico print f não imprime todos os elementos do vetor. é necessario usar um loop 

    
    return 0;
}