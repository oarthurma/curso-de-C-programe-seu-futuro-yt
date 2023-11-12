#include <stdio.h>
#include <stdlib.h>
/*                Aula 75: Exercício 06
        4) Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999;
*/
int main(){
    int i;

    for(i = 7; i <= 9999; i+=7)
            printf("%4d ", i);

    return 0;
}
