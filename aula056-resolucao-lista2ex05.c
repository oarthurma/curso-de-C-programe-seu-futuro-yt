#include <stdio.h>
#include <stdlib.h>
/*
                Aula 56: Exercício 05
        O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa
        (em kg) pela altura (h em metros) elevadaa ao quadrado (IMC= m/h²).
        Escreva um programa que leia o peso e a altura de uma pessoa, calcule e mostre o
        IMC e a faixa em que o indivíduo se enquadra de acordo com a tabela abaixo:

                IMC                 Interpretação
        Menor que 18,5              Abaixo do peso
        Entre 18,5 e menor que 25   Peso normal
        Entre 25 e menor que 30     Sobrepeso
        Entre 30 e menor que 35     Obesidade grau 1
        Entre 35 e menor que 40     Obesidade grau 2
        Maior ou igual a 40         Obesidade grau 3

*/
int main() {
    float massa, altura, imc;

    printf("Digite seu peso (em kg) e sua altura (em metros): ");
    scanf("%f%f", &massa, &altura);

    imc = massa / (altura * altura);

    if(imc < 18.5)
        printf("IMC: %f\tAbaixo do peso\n", imc);
    else if(imc >= 18.5 && imc < 25)
        printf("IMC: %f\tPeso normal\n", imc);
    else if(imc >= 25 && imc < 30)
        printf("IMC: %f\tSobrepeso\n", imc);
    else if(imc >= 30 && imc < 35)
        printf("IMC: %f\tObesidade grau 1\n", imc);
    else if(imc >= 35 && imc < 40)
        printf("IMC: %f\tObesidade grau 2\n", imc);
    else
        printf("IMC: %f\tObesidade grau 3\n", imc);


}
