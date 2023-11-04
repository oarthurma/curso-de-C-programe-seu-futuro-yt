#include <stdio.h>
#include <stdlib.h>

/*
10) Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
formam um triângulo”.
*/

int main() {
    int a, b, c, maior, menor1, menor2, somaMenor = 0;
    printf("Informe os 3 lados do triangulo: ");
    scanf("%d%d%d", &a, &b, &c);

    // Determinando qual é o maior lado
    if (a > b && a > c) {
        maior = a;
        menor1 = b;
        menor2 = c;
    }
    else if (b > a && b > c) {
        maior = b;
        menor1 = a;
        menor2 = c;
    }
    else {
        maior = c;
        menor1 = a;
        menor2 = b;
    }

    somaMenor = menor1 + menor2;

    // Verificando se o triângulo pode existir
    if (somaMenor == maior)
        printf("\nEsse triangulo nao pode existir.\n");
    else {
        if (a == b && b == c)
            printf("\nTriangulo equilatero\n");
        else if (a == b || a == b || a == c)
            printf("\nTriangulo isosceles\n");
        else
            printf("\nTriangulo escaleno");

    }



    return 0;
}
