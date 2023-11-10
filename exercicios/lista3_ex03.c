#include <stdio.h>
#include <stdlib.h>

/*
3) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
*/

int main() {
    int i, soma = 0;

    for(i = 1; i <= 1000; i+=2){
        soma = soma + i;

    }

    printf("\nA soma dos numeros impares entre 1 e 1000 =   %d\n\n", soma);


    return 0;
}
