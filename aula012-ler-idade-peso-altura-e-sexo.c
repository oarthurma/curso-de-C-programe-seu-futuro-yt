#include <stdio.h>
#include <stdlib.h>

/*
            Aula 12
        Ler idade, peso, altura e sexo
*/


int main() {

    char sexo;
    int idade;
    float peso, altura;

    printf("Digite idade, peso, altura e o sexo (f, F, m, M):\n");
    scanf("%d%f%f %c", &idade, &peso, &altura, &sexo); // colocar um espaço antes do %c para ignorar o "\n".

    // buffer do teclado => 45\n56.2\n1.63\n

    printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura,sexo);

    return 0;
}
