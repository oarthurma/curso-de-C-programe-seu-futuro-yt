#include <stdio.h>
#include <stdlib.h>
/*                Aula 92: Exercício 21
        21) Escreva um programa que gere a saída abaixo (10 linhas, 20 * por linha).
        Restrições:
        → A instrução “printf” pode ser utilizada no máximo 2 vezes;
        → O \n para saltar linha pode ser utilizado no máximo 1 vez.

        ********************
        ********************
        ********************
        ********************
        ********************
        ********************
        ********************
        ********************
        ********************
        ********************
*/

int main() {
    int i, j;

    for(j = 1; j <= 10; j++){
        for(i = 1; i <= 20; i++)
            printf("*");
        printf("\n");
    }

}
