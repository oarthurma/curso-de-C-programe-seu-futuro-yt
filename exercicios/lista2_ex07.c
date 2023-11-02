#include <stdio.h>
#include <stdlib.h>

/*
7) Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
*/

int main() {
    char caracter;

    printf("Digite um caracter: ");
    scanf("%c", &caracter);

    if (caracter == 'a' || caracter == 'A' || caracter == 'e' || caracter == 'E' ||
        caracter == 'i' || caracter == 'I' || caracter == 'o' || caracter == 'O' ||
        caracter == 'u' || caracter == 'U')
        printf("\nO caracter digitado e uma vogal.\n");
    else
        printf("\nO caracter digitado NAO e uma vogal\nt");

    return 0;
}
