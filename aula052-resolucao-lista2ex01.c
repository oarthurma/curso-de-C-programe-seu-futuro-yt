#include <stdio.h>
#include <stdlib.h>
/*
                Aula 52: Exercício 01
            Escreva um programa em C que leia três valores e apresente qual
            é o maior e qual o menor.
*/
int main() {
    int a, b, c, menor, maior;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    // primeira solução
    if(a < b) {
        if(a < c)
            menor = a;
        else
            menor = c;
    }
    else{
        if(b < c)
            menor = b;
        else
            menor = c;
    }

    if(a > b) {
        if(a > c)
            maior = a;
        else
            maior = c;
    }
    else{
        if(b > c)
            maior = b;
        else
            maior = c;
    }
    printf("Primeira versao\tMenor: %d\tMaior: %d\n", menor, maior);

    // segunda versão

    menor = a;
    maior = a;

    if(menor > b)
        menor = b;
    if(menor > c)
        menor = c;

    if(maior < b)
        maior = b;
    if(maior < c)
        maior = c;
    printf("Segunda versao\tMenor: %d\tMaior: %d\n", menor, maior);


    return 0;

}
