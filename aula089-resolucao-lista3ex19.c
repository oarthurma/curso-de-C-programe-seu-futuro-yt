#include <stdio.h>
#include <stdlib.h>
/*                Aula 89: Exercício 19
        19) Escreva um programa para ler as coordenadas (X,Y) de uma quantidade
        indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o
        quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos
        uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).
*/
int main() {
    int x, y;

    do{
        printf("Digite x e y: ");
        scanf("%d%d", &x, &y);
        if(x != 0 & y != 0){
            // primeiro quadrante
            if(x > 0 & y > 0)
                printf("Primeiro quadrante\n");
            else if(x < 0 & y > 0)
                printf("Segundo quadrante\n");
            else if(x < 0 & y < 0)
                printf("Terceiro quadrante\n");
            else
                printf("Quarto quadrante\n");
        }
    }while(x != 0 & y != 0);
}
