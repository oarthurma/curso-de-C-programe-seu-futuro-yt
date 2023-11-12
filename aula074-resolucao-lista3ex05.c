#include <stdio.h>
#include <stdlib.h>
/*                Aula 74: Exercício 05
        4) Faça um programa que leia as notas referentes às duas avaliações de uma aluno.
        Calcule e imprima a média semestral. Faça com que o programa só aceite notas
        válidas (uma nota válida deve pertencer ao intervalo de 0 a 10).
        Cada nota deve ser validada separadamente.
*/
int main(){
    float nota1, nota2, media;

    do{
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
    }while(nota1 < 0 || nota1 > 10);

    do{
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
    }while(nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;

    printf("Nota final: %.2f\n", media);
}
