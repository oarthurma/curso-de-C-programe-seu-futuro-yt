#include <stdio.h>
#include <stdlib.h>

/*
7) Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
conversão para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saída: 1:1:12
*/

int main() {

    int segundos;
    int hr, min, seg;

    // Entrada de dados
    printf("Informe a quantidade de segundos: ");
    scanf("%d", &segundos);

    // Processamento
    // 1 hora tem 3600 segundos
    hr = segundos / 3600;
    min = segundos % 3600 / 60;
    seg = segundos % 3600 - 60;

    // Saída de dados
    printf("\nSaída: %d:%d:%d\n", hr, min, seg);

    return 0;
}
