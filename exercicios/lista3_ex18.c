#include <stdio.h>
#include <stdlib.h>
/*
18) Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade,
sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que
informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.
*/
int main(){
    int i, qtd, idade, maiorIdade, menorIdade, qtdMulheresAte2000 = 0;
    char sexo;
    float salario, mediaSal = 0.0, somaSal = 0.0;

    printf("Informe a quantidade de pessoas entrevistadas: ");
    scanf("%d", &qtd);

    for(i = 1; i <= qtd; i++){
        do{
            printf("\nInforme a idade: ");
            scanf("%d", &idade);
        }while(idade < 0 || idade > 130);

        if(i == 1){
            maiorIdade = idade;
            menorIdade = idade;
        } else {
            if(idade > maiorIdade)
                maiorIdade = idade;
            if(idade < menorIdade)
                menorIdade = idade;
        }

        do{
            printf("Informe o sexo (M/F): ");
            scanf(" %c", &sexo);
        }while(sexo != 'M' && sexo != 'F');

        printf("Informe o salario: R$");
        scanf("%f", &salario);
        somaSal += salario;

        if(sexo == 'F'){
            if(salario <= 2000.0)
                qtdMulheresAte2000++;
        }
    }

    mediaSal = somaSal / qtd;

    printf("\nMedia salarial: %.2f\n", mediaSal);
    printf("Maior idade: %d\n", maiorIdade);
    printf("Menor idade: %d\n", menorIdade);
    printf("Quantidade de mulheres com salário até R$2000,00: %d\n\n", qtdMulheresAte2000);

    return 0;
}
