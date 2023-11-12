#include <stdio.h>
#include <stdlib.h>
/*                Aula 73: Exercício 04
        4) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
        Restrição:
        -> O bloco de repetição deve excutar no máximo 500 vezes.
*/
int main(){
    int i, soma = 0;

    for(i = 1; i <= 1000; i+=2){ // 500
            soma += i; // soma = soma + i -> 500
            printf("%3d ", i);
    }

    printf("\n\nSoma dos impares de 1 a 1000: %d\n\n", soma);
}
