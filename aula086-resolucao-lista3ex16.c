#include <stdio.h>
#include <stdlib.h>
/*                Aula 86: Exercício 16
        16) Faça um programa para encontrar o menor número inteiro que seja divisível
        por todos os números inteiros entre 1 e 10.
*/
int main() {
    int i, divisores, valor = 8;

    do{
        divisores = 0;
        valor+=2;
        for(i = 1; i <= 10; i++){
            if(valor % i == 0)
                divisores++;
        }
    }while(divisores != 10);

    printf("Valor: %d\n\n", valor);
}
