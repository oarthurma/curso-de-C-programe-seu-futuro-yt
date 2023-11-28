#include <stdio.h>
#include <stdlib.h>
/*
17) Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o
programa deve imprimir na tela quantos números positivos e negativos foram digitados.
Exemplo no arquivo "lista 3 repetição for while e do while.pdf".
*/
int main(){
    int valor, positivos = 0, negativos = 0;

    do{
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if(valor > 0)
            positivos++;
        else if(valor < 0)
            negativos++;
    }while(valor != 0);
    printf("Positivos: %d\nNegativos: %d\n", positivos, negativos);

    return 0;
}
