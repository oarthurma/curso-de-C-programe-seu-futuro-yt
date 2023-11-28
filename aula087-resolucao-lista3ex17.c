#include <stdio.h>
#include <stdlib.h>
/*                Aula 87: Exercício 17
        17) Faça um programa que peça números ao usuário. Quando o usuário digitar o
        número 0 (zero) o programa deve imprimir na tela quantos números positivos e
        negativos foram digitados.
*/
int main() {
    int num, positivos = 0, negativos = 0;

    do{
        printf("Digite um valor: ");
        scanf("%d", &num);

        if(num > 0)
            positivos++;
        if(num < 0)
            negativos++;

    }while(num != 0);

    printf("Positivos: %d\nNegativos: %d\n\n", positivos, negativos);
}
