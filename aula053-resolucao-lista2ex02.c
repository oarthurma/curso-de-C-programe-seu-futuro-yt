#include <stdio.h>
#include <stdlib.h>
/*
                Aula 53: Exercício 02
            Escreva um programa em C que lê 5 números inteiros, um por vez.
            Conte quantos destes valores são negativos e quantos são positivos.
            Ao final, imprima na tela a quantidade de números negativos e positivos.
*/
int main() {
    int valor, positivos = 0, negativos = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor);

    if(valor < 0)
        negativos++;// negativos += 1; negativos = negativos + 1;
    else
        positivos++;

    printf("Digite o segundo valor: ");
    scanf("%d", &valor);

    if(valor < 0)
        negativos++;
    else
        positivos++;

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor);

    if(valor < 0)
        negativos++;
    else
        positivos++;

    printf("Digite o quarto valor: ");
    scanf("%d", &valor);

    if(valor < 0)
        negativos++;
    else
        positivos++;

    printf("Digite o quinto valor: ");
    scanf("%d", &valor);

        if(valor < 0)
            negativos++;
        else
            positivos++;

    printf("\nPositivos: %d\nNegativos: %d\n", positivos, negativos);
}
