#include <stdio.h>
#include <stdlib.h>

/*
7) Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
inclusive N, se for o caso.
*/

int main() {

    int i, N, quadrado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    for(i = 0; i <= N; i += 2) {
        quadrado = i * i;
        printf("\nO quadrado de %d e %d", i, quadrado);
    }

    return 0;
}
