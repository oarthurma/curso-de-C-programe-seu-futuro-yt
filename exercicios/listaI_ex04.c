#include <stdio.h>
#include <stdlib.h>
/*
4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.
*/

int main() {

    float despesa, gorjeta, valorFinal, porcentagem;
    int pessoas;

    printf("Digite o valor da despesa do restaurante: R$ ");
    scanf("%f", &despesa);

    printf("Digite o valor da gorjeta (em porcentagem): ");
    scanf("%f", &porcentagem);

    printf("Digite o numero de pessoas: ");
    scanf("%d", &pessoas);

    gorjeta = despesa * (porcentagem / 100);

    valorFinal = (despesa + gorjeta) / 2;

    printf("\nValor que cada um deve pagar: R$%.2f\n", valorFinal);


    return 0;
}
