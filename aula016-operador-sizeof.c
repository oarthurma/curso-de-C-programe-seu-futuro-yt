#include <stdio.h>
#include <stdlib.h>

/*
                Aula 16
            operador sizeof

        sizeof x ou sizeof(int)
*/

int main() {

    float x = 1.0;

    printf("Tamanho de um float na memoria: %d bytes\n", sizeof x);
    printf("Tamanho em memoria de um int: %d bytes\n", sizeof(int));

    // 4 * 8 = 32 bits - um inteiro ocupa 4 bytes ou 32 bits na memória
    // sizeof não é uma função. É um operador, uma constante.

    return 0;
}
