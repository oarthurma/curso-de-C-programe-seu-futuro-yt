#include <stdio.h>
#include <stdlib.h>

/*
4) Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/

int main() {
    float real, dolar;
    int op;


    printf("1 - Conversao de Real para Dolar\n2 - Conversao de Dolar para Real\n");
    printf("Escolha uma das opcoes: ");
    scanf("%d", &op);


    switch (op) {
        case 1:
            printf("\nInforme o valor em Real: ");
            scanf("%f", &real);
            dolar = real / 5.3;
            printf("\nR$%.2f = $%.2f\n", real, dolar);
            break;
        case 2:
            printf("\nINforme o valor em Dolar: ");
            scanf("%f", &dolar);
            real = dolar * 5.3;
            printf("\n$%.2f = R$%.2f\n", dolar, real);
            break;
        default:
            printf("\nOpcao invalida\n");
            break;
    }

    return 0;
}
