#include <stdio.h>
#include <stdlib.h>

/*
                Aula 13
        Ler dois caracteres
*/

int main() {

    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b);
    
    // buffer do teclado => f\n 
    // espaço entre os %c -> comando para o computador desconsiderar o ENTER, o TAB e o ESPAÇO.
    // fflush(); // não utilizar essa função, pois ela só funciona no Windowns e não funciona em todos os casos.

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}
