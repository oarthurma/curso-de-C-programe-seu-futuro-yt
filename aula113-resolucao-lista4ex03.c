#include <stdio.h>
#include <stdlib.h>
/*
            Aula 113: Exercício 03
        3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela.
        Em seguida, troque o 1º elemento com o último, o 2ª com o penúltimo, ... até o
        10ª com o 11º. Imprima o vetor N modificado.

        índice: 0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
        vetor: 14 52 36 54 78 84 91 16 18 24 57 55 32 39 76 81 46 43 48 29
        vetor: 29 48 43 46 81 76 39 32 55 57 24 18 16 91 84 78 54 36 52 14
*/
int main() {

    int a, fim = 19, copia, vetor[20];

    for(a = 0; a < 20; a++){
        printf("digite %d: ", a);
        scanf("%d", &vetor[a]);
    }

    printf("\nVetor original: ");
    for(a = 0; a < 20; a++){
        printf("%2d ", vetor[a]);
    }

    for(a = 0; a < 10; a++){
        copia = vetor[a];
        vetor[a] = vetor[fim];
        vetor[fim] = copia;
        fim--;
    }

     printf("\nVetor modificado: ");
    for(a = 0; a < 20; a++){
        printf("%2d ", vetor[a]);
    }

    return 0;
}
