#include <stdio.h>
#include <stdlib.h>
/*
                Aula 61: Exercício 09
        Um usuário deseja um programa onde possa escolher que tipo de média deseja
        calcular a partir de três notas. Faça um programa que leia as notas e o tipo
        da média escolhida pelo usuário e calcule e apresente a média:
        Opções:
        • 'a' - Aritmética.
        • 'p' - Ponderada (pesos: 3, 3, 4).

*/
int main(){
     float nota1, nota2, nota3;
     char escolha;

     printf("Qual a media deseja?\na - aritmetica\np - ponderada\n");
     scanf("%c", &escolha);

     printf("Digite as tres notas: ");
     scanf("%f%f%f", &nota1, &nota2, &nota3);

     if(escolha == 'a')
        printf("Media aritmetica: %.2f\n", (nota1 + nota2 + nota3) / 3);
     else
        if(escolha == 'p')
            printf("Media ponderada: %.2f\n", (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10);
        else
            printf("\nOpcao invalida!!!\n");
}
