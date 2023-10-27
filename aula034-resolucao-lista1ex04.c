#include <stdio.h>
#include <stdlib.h>

/*
    4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta
    (em porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada
    um deve pagar. Assuma que a conta será dividida igualmente.
*/

int main() {
    int numPessoas;
    float valorDespesa, gorjeta, valorTotal, valorPorPessoa;

    printf("Digite o valor da conta, da gorjeta e a quantidade de pessoas: ");
    scanf("%f%f%d", &valorDespesa, &gorjeta, &numPessoas);
    valorTotal = valorDespesa * gorjeta/100 + valorDespesa;
    valorPorPessoa = valorTotal / numPessoas;
    printf("Cada um ira pagar R$%.2f\n", valorPorPessoa);

    return 0;
}
