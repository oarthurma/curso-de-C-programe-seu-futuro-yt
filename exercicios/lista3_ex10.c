#include <stdio.h>
#include <stdlib.h>
/*
10) Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu
guardar 1 centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia,
8 centavos no quarto dia, e assim por diante.
Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/
int main(){

    float i, soma = 0.00, cent = 0.01;

    for(i = 1; i <= 29; i++) {
        soma = soma + cent;
        cent *= 2;
    }


    printf("Valor total que tera ao final dos 30 dias: R$%.2f\n", soma);



}
