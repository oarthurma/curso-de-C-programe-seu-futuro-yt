#include <stdio.h>
#include <stdlib.h>

/*
6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.
*/

int main() {
    float reais, dolar;

    // Entrada de dados
    printf("Digite um valor em Reais: R$");
    scanf("%f", &reais);

    // Processamento
    dolar = reais / 5.30;

    // Saída de dados
    printf("\nResultado: %.2f reais resulta em %.2f dolares.\n ", reais, dolar);


    return 0;
}
