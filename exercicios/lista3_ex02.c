#include <stdio.h>
#include <stdlib.h>

/*
2) Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada
leitura de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
encerrado. Considere que a senha correta é o valor 123456.
*/

int main() {
    int senha, i;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while(senha != 123456){
        printf("\nsenha inválida\n\n");
        printf("Digite a senha: ");
        scanf("%d", &senha);
   }

   printf("\nAcesso Permitido\n\n");



    return 0;
}
