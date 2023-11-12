#include <stdio.h>
#include <stdlib.h>
/*                Aula 76: Exercício 07
        7) Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares
        de 1 até N, inclusive N, se for o caso.
        10
        1, 2, 3, 4..., 10
*/
int main(){
    int i, n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2)
        printf("%d ", i * i);
    printf("\n\n");
}
