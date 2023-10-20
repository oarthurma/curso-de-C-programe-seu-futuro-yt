#include <stdio.h>
#include <stdlib.h>

    /*
                    Aula 19
            operador long para o tipo int
            long int = %li / %ld 
            long long int = %lli / %lld
            
    */

int main() {

    long int x = 2147483647;

    printf("Tamanho de x em bytes: %d\n", sizeof x);

    printf("Valor de x: %ld\n", x);
    x++;
    printf("Valor de x: %li\n", x);

    // 4 * 8 = 32 bits

    return 0;
}
