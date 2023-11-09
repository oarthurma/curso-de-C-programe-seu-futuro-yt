    #include <stdio.h>
#include <stdlib.h>

//                Aula 65: Estrutura de repetição PARA decrescente

int main(){
    int i = 10;

    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d\n\n", i--);


    for(i = 10; i >= 0; i--)
        printf("%d ", i);
}
