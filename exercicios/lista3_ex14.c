#include <stdio.h>
#include <stdlib.h>
/*
14) Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a
média dos salários informados, o salário mais alto e o salário mais baixo.
*/
int main(){
    float media, somaSal =  0, sal = 0, maiorSal = 0, menorSal = 0;
    int i, qtdFunci;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &qtdFunci);

    printf("\n");

    for(i = 1; i <= qtdFunci; i++) {
        printf("Digite o salario o %do funcionario: ", i);
        scanf("%f", &sal);

        somaSal = somaSal + sal;

        if(i == 1) {
            maiorSal = sal;
            menorSal = sal;
        }

        if(sal > maiorSal)
            maiorSal = sal;

        if(sal < menorSal)
            menorSal = sal;
    }


    media = somaSal / qtdFunci;

    printf("Media dos salários informados: %.2f\n", media);
    printf("Salário mais alto: %.2f\n", maiorSal);
    printf("Salário mais baixo: %.2f\n\n", menorSal);



    return 0;
}
