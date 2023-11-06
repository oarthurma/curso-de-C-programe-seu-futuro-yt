#include <stdio.h>
#include <stdlib.h>
/*
            Aula 54: Exercício 03
        Escreva um programa em C que leia um número e informe se ele é divisível por 2,
        por 3 ou por 5, ou se não é divisível por nenhum deles.
*/
int main() {
    int num;

    printf("Digite um valor qualquer: ");
    scanf("%d", &num);

    // 10 % 2/3/5
    if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
        printf("E divisivel por 2, 3 ou 5.\n");
    else
        printf("Nao e divisivel por 2, 3 e 5.\n");
}
