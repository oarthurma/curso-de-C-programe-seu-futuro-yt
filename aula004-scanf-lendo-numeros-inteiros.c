#include <stdio.h>
#include <stdlib.h>

/*
            Aula 4
        Lendo números inteiros

*/

int main() {
    int valor, valor2;// criei uma variavel para guardar um valor do tipo inteiro

    // atribuição -> atribuir um valor a uma variavel
    valor = 50;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n", valor, valor2);

    return 0;
}
