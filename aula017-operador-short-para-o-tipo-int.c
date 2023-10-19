#include <stdio.h>
#include <stdlib.h>

    /*
                    Aula 17
            operador short para o tipo int
            intervalo: -32.768 até 32.767
            %hi ou %d
    */

int main() {

    int y = 0;
    short int x = 32767;

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %hi\n", x);

    // 4 * 8 = 32 bits

    return 0;
}
