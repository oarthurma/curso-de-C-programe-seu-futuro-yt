#include <stdio.h>
#include <stdlib.h>
/*
12) Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos.
*/
int main(){
    int i, alunos = 45, idade, somaIdade = 0, menor170 = 0;
    float altura, somaAltura = 0, mediaAltura = 0, mediaIdade = 0, mais20 = 0;

    for(i = 1; i <= alunos; i++) {
        printf("Informe a idade do %do aluno: ", i);
        scanf("%d", &idade);

        printf("Informe a altura do %do aluno: ", i);
        scanf("%f", &altura);

        printf("\n");

        if(altura < 1.70) {
           somaIdade += idade;
           menor170++;
        }

        if(idade > 20) {
            somaAltura += altura;
            mais20++;
        }
    }

    mediaIdade = somaIdade / (float)menor170;
    mediaAltura = somaAltura / mais20;

    printf("Idade média dos alunos com menos de 1,70m de altura: %.2f.\n", mediaIdade);
    printf("Altura média dos alunos com mais de 20 anos: %.2f.\n\n", mediaAltura);

    return 0;
}
