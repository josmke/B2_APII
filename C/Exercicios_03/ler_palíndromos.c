#include <stdio.h>

int eh_palindromo(int v[], int n){
    for (int i =0,j = n-1; i < j; i++, j--){ // Percorrer  o loop do come�o e do fim ao mesmo tempo
        if (v[i] != v[j]){ //Se o v[0] for diferente do v[n-1]
            return 0; // N�o � pal�ndromo
            break;
        }
    }
    return 1; //Se ap�s percorrer todo o vetor e ele n�o encontrar nenhuma diferen�a entre, v[0] e v[n-1], v[1] e v[n-2] e sucessivamente
    //� pal�ndromo
}

int main(){
    int v[5] = {1, 2, 3, 4, 5};

    int pali = eh_palindromo(v, 5);

    printf("%d\n", pali);


    return 0;
}