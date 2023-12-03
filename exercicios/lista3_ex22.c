#include <stdio.h>
#include <stdlib.h>
/*
22) Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3
centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários
para que Zé seja maior que Chico.
*/
int main(){
    float alturaChico = 1.5, alturaZe = 1.1;
    int anos = 0;

    do{
        alturaChico += 0.2;
        alturaZe += 0.3;
        anos++;
    }while(alturaChico > alturaZe);

    printf("\nSerao necessarios %d ano(s) para que Ze seja maior que Chico.\n\n", anos);

    return 0;
}
