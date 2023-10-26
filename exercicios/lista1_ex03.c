#include <stdio.h>
#include <stdlib.h>

/*
3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.
*/


int main() {
    int a, b;

    a = 2;
    b = 10;

    printf("\na = %d e b = %d\n", a, b);
    printf("\nTROCA...\n");

    b = b + a;
    a = b - a;
    b = b - a;


    printf("\na = %d e b = %d\n", a, b);

return 0;
}
