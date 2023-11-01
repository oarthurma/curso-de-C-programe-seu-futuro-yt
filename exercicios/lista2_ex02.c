#include <stdio.h>
#include <stdlib.h>

/*
2) Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
e positivos.
*/

int main() {
    // Declaração de variáveis
    int n1, n2, n3, n4, n5, negativo = 0, positivo = 0;

    // Entrada de dados
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &n1);


    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("Informe o terceiro numero inteiro: ");
    scanf("%d", &n3);

    printf("Informe o quarto numero inteiro: ");
    scanf("%d", &n4);

    printf("Informe o quinto numero inteiro:");
    scanf("%d", &n5);

    // Processamento
    if (n1 > 0)
        positivo++;
    else
        negativo++;

    if (n2 > 0)
        positivo++;
    else
        negativo++;

    if (n3 > 0)
        positivo++;
    else
        negativo++;

    if (n4 > 0)
        positivo++;
    else
        negativo++;

    if (n5 > 0)
        positivo++;
    else
        negativo++;


    // Saída de dados
    printf("\nNumeros positivos: %d\n", positivo);
    printf("\nNumeros negativos: %d\n\n", negativo);

    return 0;
}
