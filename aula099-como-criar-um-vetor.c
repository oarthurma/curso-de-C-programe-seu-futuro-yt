#include <stdio.h>
#include <stdlib.h>

//          Aula 99: Como criar um vetor?

int main() {
    
    int idade;
    char sexo;
    float n1;
    
    int num1[10];
    int num2[] = {1,5,9,15,43};
    int num3[5] = {4,7,5}; // preenche com zero, equivalente a {4,7,5,0,0}.
    int num4[5] = {1,2,3,4,5,6}; // neste caso, o sexto elemento (6) é perdido.
    int num5[5] = {0}; // ele vai preencher o primeiro elemento com zero e os outros serão preechidos com zero por estarem vazios
    
    char letras[100];
    char vogais[5] = {'a','e','i','o','u'};
    
    float notas[3] = {7.5,8.3,9.5};
    
    return 0;
}
