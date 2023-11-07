#include <stdio.h>
#include <stdlib.h>
/*
                Aula 59: Exercício 08
        Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês.
        Utilize para isso a estrutura de seleção switch.
        Obs.: Considere fevereiro como tendo 28 dias.

*/
int main(){
     int mes;

    printf("Digite um numero: ");
    scanf("%d", &mes);

    switch(mes) {
    case 1:
        printf("\nJaneiro com 31 dias\n");
        break;
    case 2:
        printf("\nFevereiro com 28 dias\n");
        break;
    case 3:
        printf("\nMarco com 31 dias\n");
        break;
    case 4:
        printf("\nAbril com 30 dias\n");
        break;
    case 5:
        printf("\nMaio com 31 dias\n");
        break;
    case 6:
        printf("\nJunho com 30 dias\n");
        break;
    case 7:
        printf("\nJulho com 31 dias\n");
        break;
    case 8:
        printf("\nAgosto com 31 dias\n");
        break;
    case 9:
        printf("\nSetembro com 30 dias\n");
        break;
    case 10:
        printf("\nOutubro com 31 dias\n");
        break;
    case 11:
        printf("\nNovembro com 30 dias\n");
        break;
    case 12:
        printf("\nDezembro com 31 dias\n");
        break;
    default:
        printf("\nValor nao corresponde a nenhum mes!\n");
    }
}
