#include <stdio.h>
#include <stdlib.h>

/*
5) O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC= m/h²). Escreva um programa que leia o peso
e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo
com a tabela abaixo:

        IMC                         Interpretação

Menor que 18,5                     Abaixo do peso
Entre 18,5 e menor que 25           Peso normal
Entre 25 e menor que 30              Sobrepeso
Entre 30 e menor que 35           Obesidade grau 1
Entre 35 e menor que 40           Obesidade grau 2
Maior ou igual a 40               Obesidade grau 3
*/

int main() {
    // Declaração de variáveis
    float peso, altura, imc;

    // Entrada de dados
    printf("Digite sua altura (metro): ");
    scanf("%f", &altura);

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    // Processamento
    imc = peso / (altura * altura);

    // Saída de dados
    if (imc < 18.5)
        printf("\nAbaixo do peso\n");
    else if (imc < 25)
        printf("\nPeso normal\n");
    else if (imc < 30)
        printf("\nSobrepeso\n");
    else if (imc < 35)
        printf("\nObesidade grau 1\n");
    else if (imc < 40)
        printf("\nObesidade grau 2\n");
    else
        printf("\Obesidade grau 3\n");

    return 0;
}
