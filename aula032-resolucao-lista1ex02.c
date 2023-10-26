#include <stdio.h>
#include <stdlib.h>

/*
                    Aula 32 - Resolução do exercício 2 da lista 1

    2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a
    variável “a” e um para a variável “b”. Em seguida, faça os passos que julgar
    necessário para que ao final, a variável “a” possua o valor que inicialmente estava
    em “b” e a variável “b” possua o valor que inicialmente estava em “a”.
    Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/

int main() {
    int a, b, c;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);

    printf("Valores lidos: a: %d\tb: %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("Valores lidos: a: %d\tb: %d\n", a, b);


    return 0;
}
