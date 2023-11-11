#include <stdio.h>
#include <stdlib.h>
/*                Aula 72: Exercício 03
        3) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
*/
int main(){
    int i, soma = 0;

    for(i = 1; i <= 1000; i++)// 1000
        if(i % 2 == 1) // 1000
            soma += i; // soma = soma + i

    printf("Soma dos impares de 1 a 1000: %d\n\n", soma);
}
