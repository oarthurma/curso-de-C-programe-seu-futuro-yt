#include <stdio.h>
#include <stdlib.h>
/*                Aula 96: Exercício 25
        25) Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência
        de 1 até Y, passando para a próxima linha a cada X números.
        Exemplo de entrada:
        3 99
        Exemplo de saída:

        1 2 3
        4 5 6
        7 8 9
        10 11 12
        ...
        97 98 99
*/

int main() {

    int x, y, i;

    printf("Digite X e Y: ");
    scanf("%d%d", &x, &y);

    for(i = 1; i <= y; i++){
        printf("%3d ", i);
        if(i % x == 0)
            printf("\n");
    }


    return 0;
}
