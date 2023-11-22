#include <stdio.h>
#include <stdlib.h>
/*                Aula 85: Exercício 15
        15) Faça um programa que peça ao usuário dois números inteiros e apresente o
        resultado na multiplicação entre os dois números sem utilizar a operação de
        multiplicação.
        2 x 3 = 6
        5 x 7 = 35
*/
int main() {
    int i, a, b, r = 0;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);

    for(i = 1; i <= a; i++)
        r += b;

    printf("%d * %d = %d\n\n", a, b, r);
}
