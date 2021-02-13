//Exercício 3: Escreva um programa em C que, através da leitura
//de um número fornecido pelo usuário, gere a sequência de Fibonacci
//com a quantidade de termos indicada pelo usuário.
//A sequência de Fibonacci, basicamente, consiste na geração do número
//seguinte através da soma dos dois números anteriores...
//Por exemplo: 1, 1, 2 (1 + 1), 3 (1 + 2), 5 (3 + 2), e assim por diante.
//Por exemplo, se o usuário fornecer o número 4, devem ser indicados os 4
//primeiros números da sequência, que são 1, 1, 2 e 3.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fib, temp, atual, i;


    printf("Fibonacci de: ");
    scanf("%d", &fib);

    int fibonacci[fib];

    temp = 0;
    atual = 1;

    for (i = 0; i < fib; i++){

        fibonacci[i] = atual;

        atual = atual + temp;

        if (i == 0){
            temp = atual;
        } else {
            temp = fibonacci[i - 1];
        }

    }

    for (i = 0; i < fib; i++){
        printf("%d", fibonacci[i]);
        if (i == (fib - 1)){
            printf("...\n");
        } else {
            printf(", ");
        }
    }

    return 0;
}
