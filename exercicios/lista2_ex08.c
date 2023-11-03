#include <stdio.h>
#include <stdlib.h>

/*
8) Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
isso a estrutura de seleção switch.
Obs.: Considere fevereiro como tendo 28 dias.
*/

int main() {
    int mes;

    printf("Informe o numero do mes: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            printf("\n31 dias\n");
            break;
        case 2:
            printf("\n28 dias\n");
            break;
        case 3:
            printf("\n31 dias\n");
            break;
        case 4:
            printf("\n30 dias\n");
            break;
        case 5:
            printf("\n31 dias\n");
            break;
        case 6:
            printf("\n30 dias\n");
            break;
        case 7:
            printf("\n31 dias\n");
            break;
        case 8:
            printf("\n31 dias\n");
            break;
        case 9:
            printf("\n30 dias\n");
            break;
        case 10:
            printf("\n31 dias\n");
            break;
        case 11:
            printf("\n30 dias\n");
            break;
        case 12:
            printf("\n31 dias\n");
            break;
        default:
            printf("\nMes invalido\n");
            break;
    }

    return 0;
}
