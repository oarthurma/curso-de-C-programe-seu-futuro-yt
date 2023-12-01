#include <stdio.h>
#include <stdlib.h>
/*                Aula 91: Exercício 20
        20) Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer
        preço. O monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se
        poderia ser feito com grãos de trigo dispostos em um tabuleiro de xadrez
        (que possui 64 casas), de tal forma que o primeiro quadro deveria conter apenas
        um grão e os quadros subsequentes, o dobro do quadro anterior. Crie um programa
        para calcular o total de grãos de trigo que o monge recebeu.
        long long int %d -> %lld ou %lli
        long double %lf -> %Lf
        se estiver utilizando o windowns: __mingw_printf();
*/
int main() {
    int i;
    long double somatorio = 1, inicio = 1;

    for(i = 2; i <= 64; i++){
        inicio = inicio * 2;
        somatorio += inicio;
        printf("%d Valor: %Lf\n", i, inicio);
        //se estiver utilizando o windowns: __mingw_printf("%d Valor: %Lf\n", i, inicio);
    }
    printf("->Valor: %Lf\n", somatorio);
    //se estiver utilizando o windowns: __mingw_printf("->Valor: %Lf\n", somatorio);

    return 0;
}
