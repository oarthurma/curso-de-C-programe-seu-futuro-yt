#include <stdio.h>
#include <stdlib.h>
/*
2) Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.
*/
int main(){
    int vet1[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25};
    int vet2[25] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
    31, 32, 33, 34, 35};
    int i, vet3[25];

    for(i = 0; i < 25; i++)
        vet3[i] = vet1[i] + vet2[i];

    printf("vet1\n");
        for(i = 0; i < 25; i++)
            printf("%2d ", vet1[i]);

    printf("\n\nvet2\n");
        for(i = 0; i < 25; i++)
            printf("%d ", vet2[i]);

    printf("\n\nvet3\n");
        for(i = 0; i < 25; i++)
            printf("%d ", vet3[i]);
        printf("\n");

    return 0;
}
