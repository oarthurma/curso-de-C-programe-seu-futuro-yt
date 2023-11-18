#include <stdio.h>
#include <stdlib.h>
/*
13) Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número
informado é primo ou não.
*/
int main(){
    int i, num, div = 0;

    printf("Digite um numero inteiro maior que 2: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
       if(num % i == 0){
        div++;
       }
    }

    if(div <= 2)
        printf("\n%d e primo\n\n", num);
    else
        printf("\n%d NAO e primo\n\n", num);

    return 0;
}
