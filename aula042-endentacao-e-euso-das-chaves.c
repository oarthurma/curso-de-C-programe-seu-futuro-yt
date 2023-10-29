#include <stdio.h>
#include <stdlib.h>

/*
            Aula 42: Endentação e uso das chaves
*/

int main() {

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0 == 1) { // if = se
        printf("\n\tValor negativo!\n");
        printf("\n\tValor negativo!\n");
    }
    else {
        printf("\n\tValor positivo ou igual a zero!\n");
        printf("\n\t**Valor positivo ou igual a zero!**\n");
    }
    printf("\nContinuacao do programa...\n");

    return 0;
}
