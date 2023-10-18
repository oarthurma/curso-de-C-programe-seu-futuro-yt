#include <stdio.h>
#include <stdlib.h>

/*
                Aula 14
        Ler dois caracteres
*/

int main() {

    char a, b;

    printf("Digite uma letra: ");
    scanf("%c", &a);

    // buffer => h\n
    scanf("%c"); // não está salvando em lugar nenhum, em nenhuma variável, só para tirar o ENTER
    //NÃO FUNCIONOU NO ARCH LINUX, CONTINUA LENDO O ENTER

    printf("Digite uma letra: ");
    scanf("%c", &b);

    // buffer do teclado => f\n
    // espaço entre os %c -> comando para o computador desconsiderar o ENTER, o TAB e o ESPAÇO.
    // fflush(); // não utilizar essa função, pois ela só funciona no Windowns e não funciona em todos os casos.

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}
