#include <stdio.h>
#include <stdlib.h>
/*
                Aula 63: Exercício 10
        Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os
        comprimentos dos lados de um triângulo. Caso positivo, seu programa deve informar
        também se o triângulo é equilátero, isósceles ou escaleno. Caso contrário, seu
        programa deve escrever a mensagem "Não formam um triângulo".
        LEMBRETES:
        Equilátero: 3 lados iguais
        Isósceles: 2 lados iguais
        Escaleno: 3 lados diferentes
*/

int main(){
    int a, b, c;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a) {
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um triangulo!\n");
}
