#include <stdio.h>
#include <stdlib.h>

/*
4) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
Restrição:
→ O bloco de repetição deve executar no máximo 500 vezes.
*/

int main() {
    int i, soma = 0, qnt = 0;

    for(i = 1; i <= 1000; i+=2){
        soma = soma + i;
        qnt = qnt + 1;
    }

    printf("\nA soma dos numeros impares entre 1 e 1000 =   %d\n\n", soma);
    printf("o bloco de repetição executou %d vezes\n\n", qnt);


    return 0;
}
