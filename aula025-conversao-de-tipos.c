#include <stdio.h>
#include <stdlib.h>

/*
                    Aula 25
              conversão de tipos
*/

int main() {

    int a = 10, b = 20;
    float pi = 3.1415;

    a = (int)pi;

    printf("Valor de a: %d\n", a);
    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao: %f\n", a / (float)b);

    return 0;
}
