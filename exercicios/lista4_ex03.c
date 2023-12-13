#include <stdio.h>
#include <stdlib.h>
/*
3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1º elemento com o último, o 2ª com o penúltimo, ... até o 10ª com o 11º. Imprima o vetor N
modificado.
*/
int main(){
    int i, aux, n[20];

    printf("Preencha o vetor: \n");
    for(i = 0; i < 20; i++){
        printf("Valor %d: ", i);
        scanf("%d", &n[i]);
    }

    printf("\nImprimindo o vetor: \n");
    for(i = 0; i < 20; i++)
        printf("%d ", n[i]);

    printf("\n\nTrocando os elementos...\n");
    for(i = 0; i < 10; i++){
        aux = n[i];
        n[i] = n[19-i];
        n[19-i] = aux;
        }

    printf("\nVetor modificado: \n");
    for(i = 0; i < 20; i++)
        printf("%d ", n[i]);
    printf("\n\n");

    return 0;
}
