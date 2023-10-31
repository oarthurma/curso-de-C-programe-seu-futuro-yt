#include <stdio.h>
#include <stdlib.h>
/*
            Aula 50: Estrutura de seleção switch case
            opções: - 1 = cadastrar produto
                    - 2 = vender produto
                    - 3 = buscar produto
                    - 4 = imprimir relatório
                    - 5 = sair
*/
int main() {
        int opcao;

        printf("1 - Cadastrar produto\n2 - Vender produto\n3 - Buscar produto\n4 - Imprimir\n5 - Sair\n");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("\nCadastrando novo produto.\n");
            break;// quebrar, parar
        case 2:
            printf("\nVendendo um novo produto.\n");
            break;
        case 3:
            printf("\nBuscando novo produto.\n");
            break;
        case 4:
            printf("\nImprimindo relatorio.\n");
            break;
        case 5:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
        }

    return 0;
}
