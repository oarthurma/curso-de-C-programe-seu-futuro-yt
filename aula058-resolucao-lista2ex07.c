#include <stdio.h>
#include <stdlib.h>
/*
                Aula 58: Exercício 07
        Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.

*/
int main(){
    char letra;

    printf("Digite um caracter: ");
    scanf("%c", &letra);
    // a, e, i, o, u, A, E, I, O, U
    if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i'
       || letra == 'I'|| letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U')
        printf("\tVogal...\n");
    else
        printf("\tConsoante\n");
}
