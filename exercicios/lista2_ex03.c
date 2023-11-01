#include <stdio.h>
#include <stdlib.h>

/*
3) Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.
*/

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0 && n % 3 == 0 && n % 5 == 0)
        printf("\nO numero digitado e divisivel por 2, por 3 e por 5\n");
    else if (n % 2 == 0 && n % 3 == 0)
        printf ("\nO numero digitado e divisivel por 2 e por 3\n");
    else if (n % 2 == 0 && n % 5 == 0)
        printf("\nO numero digitado e divisivel por 2 e por 5\n");
    else if (n % 3 == 0 && n % 5 == 0)
        printf("\nO numero digitado e divisivel por 3 e por 5\n");
    else if (n % 2 == 0)
        printf("\nO numero digitado e divisivel somente por 2\n");
    else if (n % 3 == 0)
        printf("\nO numero digitado e divisivel somente por 3\n");
    else if (n % 5 == 0)
        printf("\nO numero digitado e divisivel somente por 5\n");
    else
        printf("\nO numero digitado nao e divisivel nem por 2, nem por 3 e nem por 5.\n");

    return 0;
}
