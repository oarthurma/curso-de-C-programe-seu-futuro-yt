#include <stdio.h>
#include <stdlib.h>
/*
                Aula 59: Exercício 08 segunda versão
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
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nO mes possui 31 dias\n");
        break;
    case 2:
        printf("\nO mes possui 28 dias\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nO mes possui 30 dias\n");
        break;
    default:
        printf("\nValor nao corresponde a nenhum mes!\n");
    }
}
