#include <stdio.h>
#include <stdlib.h>

/*
1) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
*/

int main() {
    // Declaração de variáveis
    int n1, n2, n3, maior, menor;

    // Entrada de dados
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    // Processamento
    if (n1 > n2 && n2 > n3 && n1 > n3) {
        maior = n1;
        menor = n3;
    } else if (n1 > n2 && n2 < n3 && n1 > n3) {
        maior = n1;
        menor = n2;
    } else if (n2 > n1 && n2 > n3 && n1 > n3) {
        maior = n2;
        menor = n3;
    } else if (n2 > n1 && n2 > n3 && n1 < n3) {
        maior = n2;
        menor = n1;
    } else if (n3 > n1 && n3 > n2 && n2 < n1) {
        maior = n3;
        menor = n2;
    } else {
        maior = n3;
        menor = n1;
    }

    // Saída de dados
    printf("\nMaior valor: %d\n", maior);
    printf("\nMenor valor: %d\n", menor);

    return 0;
}
