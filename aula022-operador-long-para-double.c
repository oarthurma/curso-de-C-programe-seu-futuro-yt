#include <stdio.h>
#include <stdlib.h>

/*
                    Aula 22
         operador long para o tipo double
         double -> %lf
         long double -> %Lf (mac ou linux)

         __mingw_printf(); (windonws)
*/

int main() {

    float x = 3.1415;

    long double y = 3.14155896587458962548;

    printf("Valor de y: %.10Lf\n", y);
    //__mingw_printf("Valor de y: %.10Lf\n", y); (somente no Windonws)
    printf("Um double precisa de %d bytes de memoria.\n", sizeof y);

    // 8 * 8 = 64 bits

    return 0;
}
