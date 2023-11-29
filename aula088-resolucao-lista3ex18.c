#include <stdio.h>
#include <stdlib.h>
/*                Aula 88: Exercício 18
        18) Foi feita uma pesquisa entre os habitantes de uma região e foram coletados
        os dados de idade, sexo (M/F) e salário de X pessoas (x deve ser informado pelo
        usuário). Faça um algoritmo que informe:
        a) a média de salário do grupo;
        b) a maior e a menor idade do grupo;
        c) a quantidade de mulheres com salário até R$2000,00.
*/
int main() {
    int i, x, idade, menorIdade = 999, maiorIdade = 0, quantM = 0;
    char sexo;
    float salario, mediaSalario = 0;

    printf("Digite a quantidade de entrevistados: ");
    scanf("%d", &x);

    for(i = 1; i <= x; i++){
        printf("Digite sua idade, seu sexo e seu salario: ");
        scanf("%d %c%f", &idade, &sexo, &salario);

        // letra a
        mediaSalario += salario;

        // letra b
        if(menorIdade > idade)
            menorIdade = idade;
        if(maiorIdade < idade)
            maiorIdade = idade;

        // letra c
        if(sexo == 'F' && salario <= 2000)
            quantM++;
    }

    printf("Media salarial R$%.2f\n", mediaSalario / x);
    printf("Menor idade: %d\nMaior Idade %d\n", menorIdade, maiorIdade);
    printf("Quantidade de mulheres com salario de ate R$2000,00: %d\n\n", quantM);
}
