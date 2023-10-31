#include <stdio.h>
#include <stdlib.h>
/*
            Aula 51: Estrutura de seleção switch case com caracter
            opções: - 1 = cadastrar produto
                    - 2 = vender produto
                    - 3 = buscar produto
                    - 4 = imprimir relatório
                    - 5 = sair

             --> Lista 2 de exercícios em pdf na pasta "exercicios" <--
*/
int main() {
        char opcao;

        printf("a - Cadastrar produto\nb - Vender produto\nc - Buscar produto\nd - Imprimir\nz - Sair\n");
        scanf("%c", &opcao);

        switch(opcao){
        case 'a':
            printf("\nCadastrando novo produto.\n");
            break;// quebrar, parar
        case 'b':
            printf("\nVendendo um novo produto.\n");
            break;
        case 'c':
            printf("\nBuscando novo produto.\n");
            break;
        case 'd':
            printf("\nImprimindo relatorio.\n");
            break;
        case 'z':
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
        }

    return 0;
}
