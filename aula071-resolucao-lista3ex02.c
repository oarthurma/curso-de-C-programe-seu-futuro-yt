#include <stdio.h>
#include <stdlib.h>
/*                Aula 71: Exercício 02
        2) Escreva um programa que repita a leitura de uma senha até que seja válida.
        Para cada leitura de senha incorreta, escrever a mensagem "Senha Invalida".
        Quando a senha for informada corretamente deve ser impressa a mensagem
        "Acesso Permitido" e o programa deve ser encerrado.
        Considere que a senha correta é o valor 123456.
*/
int main(){
    int senha, senhaValida = 123456;

    printf("Digite sua senha: ");
    scanf("%d", &senha);

    while(senha != senhaValida){
        printf("Senha invalida!\n\nDigite sua senha: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!\n");
}
