#include <stdio.h>
#include <stdlib.h>

/*
9) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário
e calcule a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).
*/

int main() {
    float nota1 = 0, nota2 = 0, nota3 = 0, media = 0;
    char op;


    printf("\nEscolha o tipo de media:\na - Aritmetica\np - Ponderada\n");
    scanf("%c", &op);

    switch(op) {
        case 'a':
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);

            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);

            printf("Digite a terceira nota: ");
            scanf("%f", &nota3);

            media = (nota1 + nota2 + nota3) / 3;
            printf("Media aritmetica: %.2f\n", media);
            break;
        case 'p':
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);

            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);

            printf("Digite a terceira nota: ");
            scanf("%f", &nota3);

            media = (3 * nota1 + 3 * nota2 + 4 * nota3) / (3+3+4);
            printf("Media ponderada: %.2f\n", media);
            break;
        default:
            printf("\nMedia invalida\n");
            break;
    }


    return 0;
}
