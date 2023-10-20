#include <stdio.h>
#include <stdlib.h>

    /*
                    Aula 18
            tamanho de um int na memoria
            intervalo: -2.147.483.648 até 2.147.483.647
            %d
    */

int main() {

    int x = 2147483647;

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %d\n", x);

    // 4 * 8 = 32 bits

    return 0;
}
