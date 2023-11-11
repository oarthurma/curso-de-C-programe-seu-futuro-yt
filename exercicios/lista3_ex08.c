#include <stdio.h>
#include <stdlib.h>

/*
8) Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair

Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado.
O programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).
*/

int main() {

    int op, n1, n2;

    do{
        printf("\nEscolha uma das opcoes abaixo: \n");
        printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\nOpcao: ");
        scanf("%d", &op);

        if(op != 0 && op >= 1 && op <=4){
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &n1);

            printf("Digite o segundo numero: ");
            scanf("%d", &n2);
        }

        switch(op) {
        case 1:
            printf("%d + %d = %d\n", n1, n2, n1+n2);
            break;
        case 2:
            printf("%d - %d = %d\n", n1, n2, n1-n2);
            break;
        case 3:
            printf("%d * %d = %d\n", n1, n2, n1*n2);
            break;
        case 4:
            if(n1 != 0)
                printf("%d / %d = %d\n", n1, n2, n1/n2);
            else
                do{
                    printf("\nDividendo nao pode ser zero!\n");

                    printf("\nDigite o primeiro numero: ");
                    scanf("%d", &n1);
                }while(n1 == 0);

            printf("%d / %d = %d\n", n1, n2, n1/n2);
            break;
        case 0:
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
        }
    }while(op != 0);

    printf("\nFim do programa.\n");

    return 0;
}
