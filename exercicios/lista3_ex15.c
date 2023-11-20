#include <stdio.h>
#include <stdlib.h>
/*
15) Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na
multiplicação entre os dois números sem utilizar a operação de multiplicação.
*/
int main(){
   int i, num1, num2, result = 0;

   printf("Digite dois numeros inteiros: ");
   scanf("%d%d", &num1, &num2);

   for(i = 1; i <= num2; i++)
        result += num1;

   printf("\nResultado da multiplicação de %d por %d = %d\n\n", num1, num2, result);

    return 0;
}
