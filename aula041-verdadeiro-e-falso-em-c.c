#include <stdio.h>
#include <stdlib.h>

/*
            Aula 41: Verdadeiro e falso na linguagem C
        Em linguem C qualquer número diferente de 0 é verdadeiro, não somente o 1.
*/

int main() {

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    printf("\nResultado logico: %d\n", a < 0);

    if(a < 0 == 1) // if = se
        printf("\n\tValor negativo!\n");
    else
        printf("\n\tValor positivo ou igual a zero!\n");
    printf("\nContinuacao do programa...\n");



    return 0;
}
