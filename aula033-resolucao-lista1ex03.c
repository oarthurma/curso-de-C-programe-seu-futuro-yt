#include <stdio.h>
#include <stdlib.h>

/*
    3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
    variável auxiliar.
*/

int main() {
    int a, b;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);

    printf("a: %d\tb: %d\n", a, b);
    /*
        x = 10
        y = 5

        x = x + y -> 15
        y = x - y -> 10
        x = x - y -> 5
    */
    a = a + b;
    b = a - b;
    a = a - b;

    printf("a: %d\tb: %d\n", a, b);
    return 0;
}
