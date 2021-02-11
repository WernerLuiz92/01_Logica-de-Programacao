#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 2;
    int b = 2;
    int soma = a + b; // soma será igual a 4
    int subtracao = a - b; // subtracao será igual a 0
    int multiplicacao = a * b; // multiplicacao será igual a 4
    int divisao = a / b; // divisao será igual a 1;
    int resto = a % b; // resto será igual a 0 (a divisão de 2 por 2 não deixa resto)

    printf("Soma: %d \n", soma);
    printf("Subtracao: %d \n", subtracao);
    printf("Multiplicacao: %d \n", multiplicacao);
    printf("Divisao: %d \n", divisao);
    printf("Resto: %d \n", resto);

}
