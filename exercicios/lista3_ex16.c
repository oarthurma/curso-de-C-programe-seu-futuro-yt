#include <stdio.h>
#include <stdlib.h>
/*
16) Faça um programa para encontrar o menor número inteiro que seja divisível por todos os
números inteiros entre 1 e 10.
*/
int main(){
    int i, num = 1, div = 0, menorNum;

    for(i = 1; i <= 10; i++){
        if(i % num == 0)
            div++;
    }

    if(div == 10)
            menorNum = num;
    do{
        num++;
    }while(div != 10);

    printf("\nMenor numero inteiro divisivel por todos os numeros entre 1 e 10: %d\n\n", menorNum);
    return 0;
}
