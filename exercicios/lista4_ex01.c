#include <stdio.h>
#include <stdlib.h>
/*
1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.
*/
int main(){
    int i, j, mat1[10][10], mat2[2][2];

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("Digite um valor para %d %d: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++)
            mat2[i][j] = mat1[i][j] * mat1[i][j];
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++)
            printf("%d ", mat2[i][j]);
        printf("\n");

    }
    return 0;
}
