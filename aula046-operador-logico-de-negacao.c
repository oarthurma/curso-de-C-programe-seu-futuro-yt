#include <stdio.h>
#include <stdlib.h>
/*
            Aula 46: Operador lógico de negação !
            TABELA VERDADE x   !x
                           v   f
                           f   v
*/
int main() {
    int a = 10;
    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    printf("Operador ternario:\n");
    !(a < 0) ? printf("\n\tValor negativo!\n") : printf("\n\tValor positivo ou igual a zero!\n");

    printf("\n\nIf/else\n");
        if(!(a < 0))
            printf("\n\tValor negativo!\n");
        else
            printf("\n\tValor positivo ou igual a zero!\n");

    printf("\nContinuacao do programa...\n");
    return 0;
}
