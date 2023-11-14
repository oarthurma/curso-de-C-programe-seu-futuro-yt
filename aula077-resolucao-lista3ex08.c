#include <stdio.h>
#include <stdlib.h>
/*                Aula 77: Exercício 08
        8) Escreva um programa em C que funcione como uma calculadora. O programa deve
        apresentar um menu ao usuário da seguinte forma:
        1 – Somar
        2 – Subtrair
        3 – Multiplicar
        4 – Dividir
        0 – Sair
        Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um
        case. Após a escolha da operação, dois valores devem ser pedidos ao usuário para
        realizar a operação escolhida. Se a operação escolhida for a 4 o dividendo não pode
        ser zero, um novo valor deve ser solicitado. O programa deve funcionar até que o
        usuário escolha a opção 0 (opção de saída).
*/
int main() {
    int opcao, num1, num2;

    do {
        printf("\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n0 - Sair\n\n");
        scanf("%d", &opcao);

        if(opcao > 0 && opcao < 5){
            printf("Digite dois valores: ");
            scanf("%d%d", &num1, &num2);
        }

        switch(opcao)
        {
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            printf("Soma: %d\n", num1 + num2);
            break;
        case 2:
            printf("Subtracao: %d\n", num1 - num2);
            break;
        case 3:
            printf("Multiplicacao: %d\n", num1 * num2);
            break;
        case 4:
            while(num2 == 0)
            {
                printf("Nao existe divisao por zero!\nDigite outro valor: ");
                scanf("%d", &num2);
            }
            printf("Divisao: %d\n", num1 / num2);
            break;
        default:
            printf("Opcao invalida.\nDigite outra opcao: ");
        }
    }
    while(opcao != 0);
}
