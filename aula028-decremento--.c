#include <stdio.h>
#include <stdlib.h>

/*
                    Aula 28
            operador de decremento --
*/

int main() {

    int resultado, contador = 10;

    // sinônimas
    //contador--;
    //contador -= 1;
    //contador = contador - 1;

    resultado = --contador;

    printf("Valor: %d\n", resultado);

    return 0;
}
