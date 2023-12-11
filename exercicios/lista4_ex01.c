#include <stdio.h>
#include <stdlib.h>
/*
1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.
*/
int main(){
    int i, vet1[10], vet2[10];

    for(i = 0; i < 10; i++){
            printf("Digite um valor para %d: ", i);
            scanf("%d", &vet1[i]);
        }

    for(i = 0; i < 10; i++)
        vet2[i] = vet1[i] * vet1[i];


    for(i = 0; i < 10; i++)
        printf("%d ", vet2[i]);

    return 0;
}
