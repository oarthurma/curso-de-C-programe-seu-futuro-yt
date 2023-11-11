#include <stdio.h>
#include <stdlib.h>

/*
9) Faça um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + … + n, onde n é um número inteiro, maior que zero informado pelo usuário.
*/
int main(){

    int n, i, A = 0;

    do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &n);
    }while(n <= 0);

    for(i = 1; i <= n; i++)
        A = A + i;

    printf("Valor de A = %d\n", A);






}
