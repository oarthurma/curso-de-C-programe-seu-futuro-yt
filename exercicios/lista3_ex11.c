#include <stdio.h>
#include <stdlib.h>
/*
11) Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
se torne menor que 0,05 gramas.
*/
int main(){
    float massa, seg;

    printf("Digite a massa inicial: ");
    scanf("%f", &massa);

    while(massa > 0.05) {
        massa = massa / 2;
        seg += 50;
    }

    printf("\nTempo necessario para que a massa se torne menor que 0,05 gramas: %.0f segundos.\n\n", seg);


    return 0;
}
