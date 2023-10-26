#include <stdio.h>
#include <stdlib.h>

/*
5) Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.
*/

int main() {
    int dias;
    float liquido, desconto, bruto;

    printf("Digite o numero de dias trabalhados pelo encanador: ");
    scanf("%d", &dias);

    bruto = (45.0 * dias);

    desconto = bruto * 0.08;

    liquido = bruto - desconto;

    printf("\nO valor total que o encanador devera receber: R$%.2f\n", liquido);


    return 0;
}
