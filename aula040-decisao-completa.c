#include <stdio.h>
#include <stdlib.h>

/*
            Aula 40: Decisão completa
        Verificando se um número é negativo

*/

int main() {

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    /*
        se(a < 0)   -> if
            verdeira
        senão       -> else
            falso
    */

    if(a < 0) // if = se
        printf("\n\tValor negativo!\n");
    else
        printf("\n\tValor positivo ou igual a zero!\n");
    printf("\nContinuacao do programa...\n");



    return 0;
}
