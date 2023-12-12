#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
            Aula 112: Exercício 02
        2) Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o
        resultado em um terceiro vetor. Imprima os três vetores na tela.
*/
int main() {

    int i, vet1[25], vet2[25], vet3[25];

    srand(time(NULL));

    for(i = 0; i < 25; i++){
        vet1[i] = rand() % 100;
        vet2[i] = rand() % 100;
    }

    for(i = 0; i < 25; i++){
        vet3[i] = vet1[i] + vet2[i];
    }

    printf("\nVetor 1: ");
    for(i = 0; i < 25; i++){
        printf("%3d ", vet1[i]);
    }

    printf("\nVetor 2: ");
    for(i = 0; i < 25; i++){
        printf("%3d", vet2[i]);
    }

     printf("\nVetor 3: ");
    for(i = 0; i < 25; i++){
        printf("%3d", vet3[i]);
    }

    return 0;
}
